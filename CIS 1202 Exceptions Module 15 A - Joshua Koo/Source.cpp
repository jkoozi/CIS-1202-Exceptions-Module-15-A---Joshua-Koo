// Joshua Koo
// 12/2/23
// This program compiles an alphabet offsetting driver using exceptions
// CIS 1202
#include <iostream>

using namespace std;

// Function that calculates character offsets
char character(char start, int offset) {
    // Check if start is a letter
    if (!isalpha(start)) {
        throw invalid_argument("InvalidCharacterException: start is not a letter.");
    }

    // Convert start to uppercase to ensure case-insensitivity
    start = toupper(start);

    // Check if the target is a letter
    if (!isalpha(start + offset)) {
        throw invalid_argument("InvalidRangeException: result is not a letter.");
    }

    char result = start + offset;

    return result;
}

int main() {
	try {
		cout << "character('a', 1): " << character('a', 1) << endl;
		cout << "character('a', -1): " << character('a', -1);  // throw an exception
	}
	catch (invalid_argument& e){
		cerr << e.what() << endl;
	}
}