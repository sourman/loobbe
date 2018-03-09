enum class Death {Normal, Toxic};

class Cell {
	public:
		Cell();
		~Cell();

		unsigned long get_ID(unsigned long id);

		// Specify cell position in lobe
		bool place_cell(unsigned int ID, struct Position *position);

		// The cell is poked when a nearby axon terminal depolarizes.
		void poke_me(void);

		// A way to destroy cells in a natural way.
		// Perhaps the cell gives up its resources, or maybe it releases toxins that
		// kill surrounding cells before the destructor is called
		void die(Death death_type);

	private:
		// Depolarize cell consuming surrounding electrolytes as they flood into cell
		// Trigger a depolarization cascade down axon to target cells
		void depolarize(void);

		// Glucose concentration in the cell. Glucose is broken by mitochondira to
		// bind phosphorus with Adenason diphosphate to create adenason triphosphate
		// commonly known as ATP
		unsigned int glucose;

		// ATP concentration in the cell. used by active ion pumps in restoring the
		// cell to pre-impulse potential (around -60 mV)
		unsigned ATP;

		// Oxygen concentration in the cell. used by mitochondria in creation of ATP
		unsigned Oxygen;

		// Threshold of triggering this cell, the voltage at which the passive gates
		// of this cell breakdown and the cell fires
		unsigned threshold;

		// The voltage potential of this cell relative outside the cell
		unsigned voltage;

		// Affluence of neibouring cells this determines how effective an impulse
		// from each neighbor is in triggering this cell
		unsigned affluence;

		// Ca2+ concentration in cell
		unsigned Ca;

		// Na+ concentration in cell
		unsigned Na;

		// Temperature. Change in temperature has a strong effect on the
		// duration and conduction velocity of the impulse
		unsigned temperature;
};

