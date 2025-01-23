#include <iostream>
#include <limits>
#include <numeric>
#include "user_interface.h"

void input_name(std::string &user_name){

	std::cout << "Hi! Enter your name, please:" << std::endl;
	std::cin >> user_name;
	while (std::cin.fail() || std::cin.peek() != '\n') {
		std::cout << "Wrong input. Try again: ";
		std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> user_name;
	}
	return;
}

int number_of_attampts_before_winning(const int target_value){
	
	int current_value, attempts_counter = 0;	
	std::cout << "Enter your guess:" << std::endl;
	
	do {
		std::cin >> current_value;
		if (std::cin.fail() || std::cin.peek() != '\n') {
			std::cout << "Wrong input. Try again: ";
			std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		++ attempts_counter;
		if (current_value > target_value) {
			std::cout << "less than " << current_value << '\n';
		}
		else if (current_value < target_value) {
			std::cout << "greater than " << current_value << '\n';
		}
		else {
			std::cout << "you win!" << std::endl;
			return attempts_counter;
		}
	} while(true);
	
	std::cout << "Error occured during guessing the number\n";
	exit(1);
}