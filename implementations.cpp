//implementations of the class functions
#include <iostream>
#include "data.h"
using namespace std;

int stringOp::string_length() {

	cout << "\n== FIND THE STRING LENGTH == " << endl;
	cout << "Enter a word: ";
	cin >> first_word;

	char* ptr = first_word;
	int len = 0;

	while (*ptr != '\0') {
		len++;
		ptr++;
	}

	cout << "The length of the word is: " << len << endl;
	return len;
}

void stringOp::string_compare() {

	cout << "\n== COMPARE STRING LENGTH == " << endl;
	cout << "Enter first string: ";
	cin >> first_word;
	cout << "Enter second string: ";
	cin >> second_word;


	char* ptr = first_word;
	char* ptr2 = second_word;
	int len = 0;
	int len2 = 0;

	while (*ptr != '\0') {
		len++;
		ptr++;
	}

	while (*ptr2 != '\0') {
		len2++;
		ptr2++;
	}

	if (len > len2) {
		cout << "\nSecond string is smaller.";
	}
	else if (len2 > len) {
		cout << "\nFirst string is smaller";
	}
	else {
		cout << "\nBoth strings are equal";
	}

}

void stringOp::string_concatenate() {

	cout << "\n== CONCATENATE STRINGS == " << endl;
	cout << "\nEnter first string: ";
	cin >> first_word;
	cout << "\nEnter second string: ";
	cin >> second_word;

	char* str1 = first_word;
	while (*str1 != '\0') {
		str1++;
	}

	char* str2 = second_word;

	while (*str2 != '\0') {
		*str1 = *str2;
		str1++;
		str2++;
	}

	*str1 = '\0';

	cout << "\nCombined String is: " << first_word;

}
