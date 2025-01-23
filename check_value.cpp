#include <iostream>
#include <string>
#include "user_interface.h"
#include "high_scores.h"
#include "random_value.h"

int main(int argc, char** argv) {

	int target_value, attempts;
	std::string user_name;
	std::string filename = "high_scores.txt";
	
	input_name(user_name);
	target_value = generate_number();
	attempts = number_of_attampts_before_winning(target_value);
	save_score(attempts, user_name, filename);
	print_score(filename);
	
	return 0;
}