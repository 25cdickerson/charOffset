// Christopher Dickerson
// 12/5/2020
// CIS 1202

// This gets the value of finds the offset of a char based on a given int.
// This program also tests for exceptions

#include <iostream>

using namespace std;

char character(char start, int offset) {
	start = start + offset;
	return start;
}

int main()
{
	cout << character('a', 2);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
