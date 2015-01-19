#include <iosetream>
#include "lobe.h"

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
		for (j = 0; j < max_num_connect_; j++)
			cell_list_[i]->connect((num_cells * rand()) % num_cells);
	return false;
}

bool Lobe::place_cells_anywhere()
{
	int i;
	unsigned long num_cells = this->num_cells_();
	for (i = 0; i < num_cells; i++)
		if (cell_list_[i]->place(width * rand() % width), length * rand() % length)
			i--; // try again if the random location is not available
	return false;
}

bool Lobe::select_inpput_cells(unsigned long *cell_IDs)
{
	for (int i = 0; i < num of imput cells; i++)
		cell_ID_to_cell(cell_IDs[i])->connect(location);
}

bool Lobe::place_cells_anywhere();
{
	for_all_cells(place_cell, position )
}

boot place_cell(cell_ID ID, Position *position);
