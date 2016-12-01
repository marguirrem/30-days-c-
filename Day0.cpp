#include <iostream>
using namespace std;

/*
Output Format

Print Hello, World. on the first line, and the contents of on the second line.

Sample Input

Welcome to 30 Days of Code!

Sample Output

Hello, World. 
Welcome to 30 Days of Code!

*/

int main() {
    // Declare a variable named 'input_string' to hold our input.
    string input_string; 
    
    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, input_string); 
    
    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << "Hello, World." << endl;
    
    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    cout << input_string << endl;
    return 0;
}