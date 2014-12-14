#if 0
using std::cout
using std::cin
using std::endl
#endif
#include <iostream>
#include "lobe.hpp"

using namespace std;

int main (int argc, char *argv[])
{
	Lobe *lobe = new Lobe();
	if (argc <= 1)
		lobe->add(k_DefaultNumCells);
	else
		lobe->add(std::string::number(argv[1]));

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
