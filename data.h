// operations of the code -- includes the class function prototype
#pragma once

#include <iostream>
using namespace std;

class stringOp {
private:
	char first_word[100];
	char second_word[100];

public:
	int string_length();
	void string_compare();
	void string_concatenate();
};
