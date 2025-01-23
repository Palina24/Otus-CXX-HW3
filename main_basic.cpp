#include <iostream>
#include <string>
#include "user_interface.h"
#include "high_scores.h"
#include "random_value.h"
#include "argument.h"

int main(int argc, char** argv) {

	int target_value, attempts, max_num;
	std::string user_name;
	std::string filename = "high_scores.txt";
	PARAMS parameter = read_arguments(argc, argv);
	
	if((int)parameter & (int)PARAMS::TABLE){
		print_score(filename);
		return 0;
	} else if((int)parameter & (int)PARAMS::NONE)
		target_value = generate_number();
	else if((int)parameter & ((int)PARAMS::LEVEL | (int)PARAMS::MAX_NUM)){
		set_max(parameter, max_num, argv);
		target_value = generate_number(max_num);
	}
	
	input_name(user_name);
	attempts = number_of_attampts_before_winning(target_value);
	save_score(attempts, user_name, filename);
	print_score(filename);
	
	return 0;
}