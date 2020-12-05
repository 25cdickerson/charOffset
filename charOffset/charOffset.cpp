// Christopher Dickerson
// 12/5/2020
// CIS 1202

// This gets the value of finds the offset of a char based on a given int.
// This program also tests for exceptions

#include <iostream>

using namespace std;

class invalidCharacterException {};
class invalidRangeException {};

char character(char start, int offset) {

	start = start + offset;


	if (!isalpha(start)) {
		throw invalidCharacterException();
	}
	else if (!isalpha(start + offset)) {
		throw invalidRangeException();
	}
		
	return start;
}

int main()
{
	try {
		cout << character('a', 1) << "\n";
		cout << character('a', -1) << "\n";
		cout << character('Z', -1) << "\n";
		cout << character('?', 5) << "\n";
	}
	catch (invalidCharacterException) {
		cout << "ERROR: Invalid Character\n";
	}
	catch (invalidRangeException) {
		cout << "ERROR: Invalid Range\n";
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
