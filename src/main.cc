#if 0
using std::cout
using std::cin
using std::endl
#endif
#include <iostream>
#include <fstream>
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
		lobe->add_x_cells( strtol(argv[1].c_str(),0,10));
		// The above  line should be like the following, but because of flimsy
		// cygwin port of the compiler we cant get full C++11 functionality
		// lobe->add_x_cells(std::stol(argv[1]));

	for (int i = 0; i < k_MaxCells; i++) {
		cells[i] = new Cell();
	}


	for (int i = 0; i < k_MaxCells; i++) {
		cells[i]->random_connect;
		cells[i]->poke_me();
	}

	cout << "The world is a strange place. Here is one more stranger" << endl;
	return 0;
}
