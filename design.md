Cell:
        can be poked,
        Must reach firing threshold before firing
	firing tank is filled up faster when cell is poked
	baseline firing rate is determined by the replenishment rate and the threshold 
        the more pokes received from a certain direction the more responsive this cell becomes to the pokes
        can be killed if it pokes too much upper frequency limit before the cell physicaly dies system wide
        can poke multiple cells simultaneously
        poking depletes the surrounding resources slightly. Cell has maximum recover speed
        has a location
        is more affected by pokes of close by axons
        can have up to 100,000 dendrites
        dendrites become more receptive the more pokes received.
        cells have a baseline firing rate. more stimulation from surrounding cells causes faster firing

Axon:
        has beginning
        has end 
	uses resources in surrounding regions along the axon to propagate impulse along its length

Concept Reward:
        Reward is global. All cells receive reward or all cells do not receive reward

Concept Starting energy:
        we start with a set amount of energy that is external but is delivered to the cells that require it

Task:
        Some metrics upon which more energy is afforded to the cells
        the task is given through interface neurons? not sure
        the task will not be programmed in the loobbe design.
        what triggers specialization?

Success:
        level
        adaptation
        specialization
        self preservation

Resources:
        Resources at a one supply location diffuse like a salt diffuses in water
	defuse speed is a system wide variable

Physical limit:
        Each cell occupies a finite amount of space. Each cell cannot grow beyond a certain size limit
        the total size of the cells cannot exceed a certain limit

System input:
        resources
        task (impulses)

System output:
        impulses

Interpreter:
        interprets impulses in a specified way that is not formally known to the cells

All modules have state methods so that the internal workings of the lobe can be  viewed


Managing communication
	 * Management of who pokes who when cannot be designed hastily. There are
	 * two problems that must be adderessed. The first is the atomicity of
	 * firing. The second is program complexity.
	 *
	 * Atomicuty of firing is needed to ensure that when an axon fires, all its
	 * target cells recieve the impulse within approxmatly the same time.
	 * This is neccessary because the behavior of cells is largely dependant on
	 * the timing of the firining. Much information is carried in the frequency
	 * of firing in many types of neurons
	 *
	 * Program complexity must also be considered since the human brain contains
	 * more than 1 billion neurons. Each with up to 100 thousand target neurons
	 * at the terminal end of each axon. We should avoid creating 1 billion
	 * linked lists, each with 100 thousand items to be updated in every
	 * iteration of the program



Neuron
	Monitors
		Dendrite connections - random start, spread around area of cell head. More receptive to neurons
			that fire in sync with this neuron. Slowly goes back to original strength in decay
			pattern if pattern not repeated
		Glucose - energy for cell
		Oxygen - reward
		Electrolyts - Cells send impulses using electrolytes. impulses bring cell closer to firing
		ATP - ATP to be used by electrolyte pumps to restore baseline voltage


	Controls
		Impulse - by depolarising impulse travels along axon
		Electrolyte pumps - use glucose to restablish nominal membrane potential after nuron fires
		Suicide - Programmed cell death. Occurs when resources run low, or cell is over burdended
		Axon growth - Random. length and direction and connections assigned initially
		Synapses - nurons that fire together, wire together. Nurons that fire apart, wire apart

Lobe
	Monitors
		Output neurons - "motor neurons" lobe external connections connect to members of lobe
		Resource levels - has a way of measuring resources floating around cells
		Task - file passed, no specific format

	Controls
		Glucose - provide glucose to the cells in the lobe
		Input neurons - Sensory neurons that get singals from outside of lobe
