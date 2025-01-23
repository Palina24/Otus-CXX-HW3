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
	out_file << '\n';
	out_file.close();
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
	int high_score = 0, counter = 0;
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
		++counter;
		std::cout << username << '\t' << high_score << '\n';
	}
	
	if(!counter)
		std::cout << "No notes in the file!\n";
	
	in_file.close();
	return;
}

void save_max_score(int attempts_count, const std::string& user_name
								, const std::string& high_scores_filename) {
	
	std::ifstream in_file{high_scores_filename};
	std::string username, *usernames;
	int i, n = 0, high_score, *scores;
	if (!in_file.is_open()) {
		std::cout << "Failed to open file for read: " << high_scores_filename << "!\n";
	} else {
		//count number of strings
		while (true) {
			in_file >> username;
			in_file >> high_score;
			in_file.ignore();
			if (in_file.eof()) 
				break;
			else if(in_file.fail()){
				printf("File to read from it is damaged!\n");
				exit(1);
			}
			if(username == user_name){
				if(high_score < attempts_count)
					attempts_count = high_score;
			} else
				n++;
		}
		//n = count of scores of all other players
		if(n){
			usernames = new std::string[n];
			scores = new int[n];
		}
		//remember results of each player exsept our player
		i = 0;
 		in_file.close();
		in_file.open(high_scores_filename);
		if (!in_file.is_open()) {
			std::cout << "Failed to open file for read: " << high_scores_filename << "!\n";
			exit(1);
		}
		while (i < n) {
			in_file >> usernames[i];
			// Read the high score next
			in_file >> scores[i];
			// Ignore the end of line symbol
			in_file.ignore();
			
			// Print the information to the screen
			if(usernames[i] == user_name)
				i--; 
			i++;
		}
		in_file.close();
	}
	
	std::ofstream out_file{high_scores_filename, std::ios_base::out};
	if (!out_file.is_open()) {
		std::cout << "Failed to open file for write: " << high_scores_filename << "!\n";
		exit(1);
	}

	// Append new results to the table:
	i = 0;
	while(i < n){
		out_file << usernames[i] << '\t' << scores[i] << '\n';
		i++;
	}
	out_file << user_name << '\t' << attempts_count << '\n';
		
	out_file.close();
	if(n){
		delete[] usernames;
		delete[] scores;
	}
	return;	
} 

void print_max_score(const std::string& high_scores_filename) {
	// Read the high score file and print best results of each player
	std::ifstream in_file{high_scores_filename};
	if (!in_file.is_open()) {
		std::cout << "Failed to open file for read: " << high_scores_filename << "!\n";
		exit(1);
	}

	std::string*usernames, username;
	int *scores, n = 0, high_score;
	//count number of strings
	while (true) {
		in_file >> username;
		in_file >> high_score;
		in_file.ignore();
		if (in_file.eof()) 
			break;
		else if(in_file.fail()){
			printf("File to read from it is damaged!\n");
			exit(1);
		}
		++n;
	}
	
	if(!n){
		std::cout << "No notes in the file!\n";
		in_file.close();
		return;
	}
	usernames = new std::string[n];
	scores = new int[n];
	
	//save the best result of each player
	in_file.close();
	in_file.open(high_scores_filename);
	if (!in_file.is_open()) {
		std::cout << "Failed to open file for read: " << high_scores_filename << "!\n";
		exit(1);
	}
	int i = 0, j = 0;
	while (true) {
		in_file >> usernames[i];
		// Read the high score next
		in_file >> scores[i];
		// Ignore the end of line symbol
		in_file.ignore();
		if (in_file.eof()) 
			break;
		
		// remove the remembered result, if we have read better
		j = 0;
		while(j < i){
			if(usernames[i] == usernames[j]){
				if(scores[j] > scores[i])
					scores[j] = scores[i];
				
				n--; i--;
				break;
			} 
			j++;
		}	
		i++;
	}

	//print best results
	std::cout << "High scores table:\n";
	i = 0;
	while(i < n){
		std::cout << usernames[i] << '\t' << scores[i] << '\n';
		i++;
	}
	delete[] usernames;
	delete[] scores;
	in_file.close();
	return;
}