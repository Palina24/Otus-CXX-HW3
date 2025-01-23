#include <iostream>
#include <string>
#include <cassert>
#include "argument.h"

PARAMS read_arguments(int argc, char** argv) {

	// argc - it is a count of arguments
	// But there is some detail - OS always pass one system argument - the name of the executable
	// So, is the application was executed without arguments at all, argc will be still == 1

	// Let's print this argument
	if(argc <= 1) 
		return PARAMS::NONE;

	int current = 2;
	bool max_or_level = false, table = false;
	std::string arg1_value{ argv[1] };
	int parameter_value = 0;
	// To check - does use print some other argument we should check if the argc >= 2
	if(arg1_value == "-table" && argc > 2){
		std::cout << "Error: -table should be called without arguments!\n";
		exit(1);
	} else if(arg1_value == "-table")
		return PARAMS::TABLE;
	
	if(arg1_value == "-max" && argc > 3){
		std::cout << "Error: -max should not be called with more than one parameters!\n";
		exit(1);
	} else if(arg1_value == "-max" && argc == 3){
		parameter_value = std::stoi(argv[2]);
	  if(parameter_value <= 0){
			std::cout << "Error: -max reqires positive integer parameters!\n";
			exit(1);
		}
		return PARAMS((int)PARAMS::MAX_NUM | (int)PARAMS::ARG); 
	}	 else if(arg1_value == "-max")	
		return PARAMS::MAX_NUM;
	
	if(arg1_value == "-level" && argc > 3){
		std::cout << "Error: -max should not be called with more than one parameters!\n";
		exit(1);
	} else if(arg1_value == "-level" && argc == 3){
		parameter_value = std::stoi(argv[2]);
		if(parameter_value < 1 || parameter_value > 3){
			std::cout << "Error: -level reqires parameter 1, 2 or 3!\n";
			exit(1);
		}
		return PARAMS((int)PARAMS::LEVEL | (int)PARAMS::ARG);
	}	 else if(arg1_value == "-level")	
		return PARAMS::LEVEL;
		
	std::cout << "Error: unknown parameters!\n";
	exit(1);
}

void set_max(PARAMS param, int& max, char** argv){
	assert((int)param & ((int)PARAMS::LEVEL | (int)PARAMS::MAX_NUM));
	if((int)param & (int)PARAMS::MAX_NUM){
		max = ( ((int)param & (int)PARAMS::ARG)? std::stoi(argv[2]) : 100);
		return;
	}
	
	if((int)param & (int)PARAMS::LEVEL){
		max = ( ((int)param & (int)PARAMS::ARG)? std::stoi(argv[2]) : 100);
		if(max == 1)
			max = 9;
		else if(max == 2)
			max = 49;
		else if(max == 3)
			max = 99;
		return;
	}
	
	assert(1);
}