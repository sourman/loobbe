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
	cout << "The world is a strange place. Here is one more stranger" << endl;
	Cell *cell = new Cell();
	delete cell;
	return 0;
	
}
