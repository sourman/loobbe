
#include "iostream"

using namespace std

class Cell{
	public:
		Cell();
		~Cell();

		std::string Get_ID();

		// The cell is poked when a nearby axon terminal depolarizes.
		Poke();

		// A way to destroy cells in a natural way.
		// Perhaps the cell gives up its resources, or maybe it releases toxins that
		// kill surrounding cells before the destructor is called
		Die();

	private:
		// Depolarize cell consuming surrounding electrolytes as they flood into cell
		// Trigger a depolarization cascade down axon to target cells
		Depolarize();

		// Glucose concentration in the cell. Glucose is broken by mitochondira to
		// bind phosphorus with Adenason diphosphate to create adenason triphosphate
		// commonly known as ATP
		glucose

		// ATP concentration in the cell. used by active ion pumps in restoring the
		// cell to pre-impulse potential (around -60 mV)
		ATP

		// Oxygen concentration in the cell. used by mitochondria in creation of ATP
		Oxygen

		// Threshold of triggering this cell, the voltage at which the passive gates
		// of this cell breakdown and the cell fires
		threshold

		// The voltage potential of this cell relative outside the cell
		voltage

		// Affluence of neibouring cells this determines how effective an impulse
		// from each neighbor is in triggering this cell
		affluence

		// Ca2+ concentration in cell
		Ca

		// Na+ concentration in cell
		Na

		// Temperature of the axon. Change in temperature has a strong effect on the
		// duration and conduction velocity of the impulse
		temperature
}
