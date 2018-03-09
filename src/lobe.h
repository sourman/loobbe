#include <iostream>
#include <fstream>
#include "cell.h"

using namespace std;

struct Position{int x, y, z;};


class Lobe {
	public:
		bool add_x_cells(unsigned long num);
		bool connect_randomly();
		bool place_cells_anywhere();

		// select cells to handle input and output
		bool select_input_cells(unsigned long *cell_IDs);
		bool select_output_cells(unsigned long *cell_IDs);

		// pointer to device from which formatted input will be read
		bool input(ofstream *stream);
		bool output(ofstream *stream);

		// give energy too the lobe to rward it for success
		bool feed_me();

		// destroy the lobe and sub structures
		bool deastroy();

		bool for_all_cells(void * function, void** args);

	private:
		unsigned long num_cells__();

		unsigned long num_cells_;

		Cell **cell_list_; // linked list, will use std::list

		unsigned long max_num_connect_;
};
