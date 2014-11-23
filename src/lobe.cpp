
#include "iostream"

using namespace std

class Cell{
	private:

	/*
	 * Glucose concentration in the cell. Glucose is broken by mitochondira to
	 * bind phosphorus with Adenason diphosphate to create adenason triphosphate
	 * commonly known as ATP
	 */
	glucose

	/*
	 * ATP concentration in the cell. used by active ion pumps in restoring the
	 * cell to pre-impulse potential (around -60 mV)
	 */
	ATP

	/*
	 * Oxygen concentration in the cell. used by mitochondria in creation of ATP
	 */
	Oxygen

	/*
	 * threshold of triggering this cell, the voltage at which the passive gates
	 * of this cell breakdown and the cell fires
	 */
	threshold

	/*
	 * The voltage potential of this cell relative outside the cell
	 */
	voltage

	/*
	 * affluence of neibouring cells this determines how effective an impulse
	 * from each neighbor is in triggering this cell
	 */
	affluence

	/*
	 * Ca2+ concentration in cell
	 */
	 Ca

	/*
	 * Na+ concentration in cell
	 */
	 Na

}
