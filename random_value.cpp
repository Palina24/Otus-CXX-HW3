#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
#include "random_value.h"

int generate_number(int max_value) {
	
	int result;

	if(max_value <= 0){
		std::cout << "Wrong max_value: it must be positive!\n";
		exit(1);
	} 

	std::srand(std::time(nullptr)); // use current time as seed for random generator
	
	return (std::rand() % max_value);
}


int generate_number() {
	std::srand(std::time(nullptr)); // use current time as seed for random generator

	return (std::rand() % (INT_MAX/2));
}