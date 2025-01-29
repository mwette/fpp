package fpp.compiler.analysis

/** Dictionary data structure */
case class Dictionary(
 /** A set of type symbols used in the topology */
 typeSymbolSet: Set[Symbol] = Set(),
 /** The map from resolved IDs to command entries */
 commandEntryMap: Map[BigInt, Dictionary.CommandEntry] = Map(),
 /** The map from resolved IDs to telemetry channel entries */
 tlmChannelEntryMap: Map[BigInt, Dictionary.TlmChannelEntry] = Map(),
 /** The map from resolved IDs to event entries */
 eventEntryMap: Map[BigInt, Dictionary.EventEntry] = Map(),
 /** The map from resolved IDs to parameter entries */
 paramEntryMap: Map[BigInt, Dictionary.ParamEntry] = Map(),
 /** The map from resolved IDs to record entries */
 recordEntryMap: Map[BigInt, Dictionary.RecordEntry] = Map(),
 /** The map from resolved IDs to container entries */
 containerEntryMap: Map[BigInt, Dictionary.ContainerEntry] = Map(),
 // TODO: Telemetry packets
)

object Dictionary {

  /** A command entry in the dictionary */
  case class CommandEntry(instance: ComponentInstance, command: Command)

  /** A container entry in the dictionary */
  case class ContainerEntry(instance: ComponentInstance, container: Container)

  /** A parameter entry in the dictionary */
  case class ParamEntry(instance: ComponentInstance, param: Param)

  /** A record entry in the dictionary */
  case class RecordEntry(instance: ComponentInstance, record: Record)

  /** A telemetry channel entry in the dictionary */
  case class TlmChannelEntry(instance: ComponentInstance, tlmChannel: TlmChannel)

  /** An event entry dictionary entry */
  case class EventEntry(instance: ComponentInstance, event: Event)

  /** Constructs the initial dictionary (no telemetry packets) */
  def initial(a: Analysis, t: Topology) = Dictionary(
    getTypeSymbolSet(a, t),
    getCommandEntryMap(t),
    getTlmChannelEntryMap(t),
    getEventEntryMap(t),
    getParamEntryMap(t),
    getRecordEntryMap(t),
    getContainerEntryMap(t)
  )

  private def getTypeSymbolSet(analysis: Analysis, topology: Topology): Set[Symbol] = {
    val symbolSetList = for (componentInstance, _) <- topology.instanceMap yield {
      val component = componentInstance.component
      val commandSymbolSet = for (_, command) <- component.commandMap yield {
        command match {
          case fpp.compiler.analysis.Command.NonParam(aNode, kind) => {
            val Right(a) = UsedSymbols.specCommandAnnotatedNode(analysis, aNode)
            UsedSymbols.resolveUses(analysis, a.usedSymbolSet)
          }
          case fpp.compiler.analysis.Command.Param(aNode, kind) => Set()
        }
      }
      val eventSymbolSet = for (_, event) <- component.eventMap yield {
        val Right(a) = UsedSymbols.specEventAnnotatedNode(analysis, event.aNode)
        UsedSymbols.resolveUses(analysis, a.usedSymbolSet)
      }
      val tlmChannelSymbolSet = for (_, channel) <- component.tlmChannelMap yield {
        val Right(a) = UsedSymbols.specTlmChannelAnnotatedNode(analysis, channel.aNode)
        UsedSymbols.resolveUses(analysis, a.usedSymbolSet)
      }
      val paramSymbolSet = for (_, param) <- component.paramMap yield {
        val Right(a) = UsedSymbols.specParamAnnotatedNode(analysis, param.aNode)
        UsedSymbols.resolveUses(analysis, a.usedSymbolSet)
      }
      val recordSymbolSet = for (_, record) <- component.recordMap yield {
        val Right(a) = UsedSymbols.specRecordAnnotatedNode(analysis, record.aNode)
        UsedSymbols.resolveUses(analysis, a.usedSymbolSet)
      }
      val containerSymbolSet = for (_, container) <- component.containerMap yield {
        val Right(a) = UsedSymbols.specContainerAnnotatedNode(analysis, container.aNode)
        UsedSymbols.resolveUses(analysis, a.usedSymbolSet)
      }
      val combined = List.concat(
        commandSymbolSet,
        eventSymbolSet,
        tlmChannelSymbolSet,
        paramSymbolSet,
        recordSymbolSet,
        containerSymbolSet
      )
      combined.foldLeft(Set[Symbol]()) ((acc, elem) => acc ++ elem)

    }
    // Merge list of sets into a single set and return
    symbolSetList.foldLeft(Set[Symbol]()) ((acc, elem) => acc ++ elem)
  }

  private val getCommandEntryMap =
    getEntryMap (_.commandMap) (CommandEntry.apply)

  private val getTlmChannelEntryMap =
    getEntryMap (_.tlmChannelMap) (TlmChannelEntry.apply)

  private val getEventEntryMap =
    getEntryMap (_.eventMap) (EventEntry.apply)

  private val getParamEntryMap =
    getEntryMap (_.paramMap) (ParamEntry.apply)

  private val getRecordEntryMap =
    getEntryMap (_.recordMap) (RecordEntry.apply)

  private val getContainerEntryMap =
    getEntryMap (_.containerMap) (ContainerEntry.apply)

  private def getEntryMap[Specifier, Entry]
    (getSpecMap: Component => Map[BigInt, Specifier])
    (constructEntry: (ComponentInstance, Specifier) => Entry)
    (t: Topology)
  = {
    def addEntriesForInstance(
      entryMap: Map[BigInt, Entry],
      ci: ComponentInstance,
    ) = {
      val m = getSpecMap(ci.component)
      m.foldLeft(entryMap) (addEntry(constructEntry, ci))
    }
    t.instanceMap.keys.foldLeft (Map[BigInt, Entry]()) (addEntriesForInstance),
  }

  private def addEntry[Specifier, Entry](
    constructEntry: (ComponentInstance, Specifier) => Entry,
    ci: ComponentInstance
  ) = {
    (m: Map[BigInt, Entry], idSpecifierPair: (BigInt, Specifier)) =>  {
      val (localId, s) = idSpecifierPair
      val id = ci.baseId + localId
      val entry = constructEntry(ci, s)
      m + (id -> entry)
    }
  }

}
