#pragma once
#include <iostream>
#include <string>

enum class PARAMS {NONE = 0, TABLE = 1, MAX_NUM = 2, LEVEL = 4, ARG = 8};

PARAMS read_arguments(int argc, char** argv);

void set_max(PARAMS param, int& max, char** argv);