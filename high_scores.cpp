#include <iostream>
#include <fstream>
#include <string>
#include "high_scores.h"


void save_score(int attempts_count, const std::string& user_name
								, const std::string& high_scores_filename) {
	
	std::ofstream out_file{high_scores_filename, std::ios_base::app};

	if (!out_file.is_open()) {
		std::cout << "Failed to open file for write: " << high_scores_filename << "!\n";
		exit(1);
	}

	// Append new results to the table:
	
	out_file << user_name << ' ';
	out_file << attempts_count;
	out_file << std::endl;
	return;
} 

void print_score(const std::string& high_scores_filename) {
	// Read the high score file and print all results
	std::ifstream in_file{high_scores_filename};
	if (!in_file.is_open()) {
		std::cout << "Failed to open file for read: " << high_scores_filename << "!\n";
		exit(1);
	}

	std::cout << "High scores table:\n";
	std::string username;
	int high_score = 0;
	while (true) {
		// Read the username first
		in_file >> username;
		// Read the high score next
		in_file >> high_score;
		// Ignore the end of line symbol
		in_file.ignore();

		if (in_file.eof()) 
			break;
		else if(in_file.fail()){
			printf("File to read from it is damaged!\n");
			exit(1);
		}
		// Print the information to the screen
		std::cout << username << '\t' << high_score << '\n';
	}

	return;
}