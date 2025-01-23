#include <iostream>

int number_of_attampts_before_winning(const int target_value){
	
	int current_value, attempts_counter = 0;	
	std::cout << "Enter your guess:" << std::endl;
	
	do {
		std::cin >> current_value;
		if (std::cin.fail() || std.peek() != '\n') {
			std::cout << "Wrong input. Try again: ";
			std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		++ attempts_counter;
		if (current_value < target_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		else if (current_value > target_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		else {
			std::cout << "you win!" << std::endl;
			return attempts_counter;
		}
	} while(true);
	
	std::cout << "Error occured during guessing the number\n";
	return attempts_counter;
}
