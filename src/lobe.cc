#include <iosetream>
#include "lobe.hpp"

using namespace std;

bool Lobe::add_x_cells(unsigned long num)
{
	int i;
	for (i = 0; i < num; i++)
		cell_list_[i] Cell();
	return false;
}

bool Lobe::connect_randomly()
{
	// TODO: simple expensive implenetation of cell connection
	// to be replaced in the future with fast intercellular communcation objects
	int i;
	unsigned long num_cells = this->num_cells_();
	for (i = 0; i < num_cells; i++)
		cell_list_[i]->connect(rand() % num_cells);
}
