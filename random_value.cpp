#include <iostream>
#include <cstdlib>
#include <ctime>
#include "random_value.h"

int generate_number(int max_value) {

	if(max_value < 5){
		std::cout << "Wrong max_value: it must not be less than 5\n";
		exit(1);
	} else if(max_value > 1000){
		std::cout << "Wrong max_value: it must not be more than 1000\n";
		exit(1);
	}

	std::srand(std::time(nullptr)); // use current time as seed for random generator

	return (std::rand() % max_value);
}