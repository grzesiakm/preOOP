#include <iostream>

#ifdef LIB_TEST
	#include "lib.h"
#endif
 
int main(int argc, char** argv) {
	std::cout << "It works" << std::endl;

#ifdef LIB_TEST
	foo();
#endif

#ifndef NDEBUG
	std::cout << "It works (DEBUG)" << std::endl;
#endif

	if(argc > 2)
		return -1;
	return 0;
}

