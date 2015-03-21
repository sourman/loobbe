#if 0
using std::cout
using std::cin
using std::endl
#endif
#include <iostream>
#include <fstream>
#include <string>
#include "lobe.h"
#include <cstdlib>

using namespace std;

int main (int argc, char *argv[])
{
	Lobe *lobe = new Lobe();

	const unsigned long k_DefaultNumCells = 1000;
	if (argc <= 1)
		lobe->add_x_cells(k_DefaultNumCells);
	else
		lobe->add_x_cells(strtol(argv[1],0,10));

	// Random connect
	lobe->connect_randomly();
	lobe->place_cells_anywhere();

	// TODO: add command line args to select input and output cells
	unsigned long input_cell_ids[] { 1, 2, 3, 5, 8, 9 };
	unsigned long output_cell_ids[] { 500, 501, 502, 503, 504, 505 };
	unsigned long blah[50] { 1, 2, 3, 4 };
	string s {"potato salad " "pomagrannet sauce"};

	cout << s;

	lobe->select_input_cells(input_cell_ids);
	lobe->select_output_cells(output_cell_ids);

	cout << "The world is a strange place. Here is one more stranger" << endl;
	return 0;
}
