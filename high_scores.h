#pragma once
#include <string>

void save_score(int attempts_count, const std::string& user_name
								, const std::string& high_scores_filename = "high_scores.txt");
void print_score(const std::string& high_scores_filename);

void save_max_score(int attempts_count, const std::string& user_name
								, const std::string& high_scores_filename = "high_scores.txt");
void print_max_score(const std::string& high_scores_filename);