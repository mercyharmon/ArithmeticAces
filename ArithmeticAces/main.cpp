//==========================================================
//
// Title: ArithmeticAces P1
// Author: Mercyllia Harmon
// Description:
// Application that performs arithmetic on two numbers.
// Prompt the user for two integers and calculate and print the addition, subtraction, multiplication, division, and remainder of the two numbers. Print title “Integer arithmetic” before the output. Format the two inputs and five outputs (calculations) in two columns with the first column containing a label (“Addition”, “Subtraction”, etc.) and the second column containing the value. Show one input/output per line.
//Then prompt the user for two real numbers and calculate and print the addition, subtraction, multiplication, and division of the two numbers. Print title “Real-number arithmetic” before the output. Format the two inputs and four outputs (calculations) in two columns with the first column containing a label (“Addition”, “Subtraction”, etc.) and the second column containing the value. Show one input/output per line. Format any real numbers to four decimal places
//
//==========================================================

#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()

{
    
    // Declare variables
    int numA;
    int numB;
    int sum, difference, product, remainder;
    double division;
    
    // Show application header
    cout << "Welcome to Arithmetic Aces" << endl;
    cout << "--------------------------" << endl << endl;
    
    // Initialize varibles
    cout << "Please input the first integer number ";
    cin >> numA;
    cout << "Please input the second integer: ";
    cin >>numB;
    
    // Caculate addition, subtraction, multiplication, division, and remainder of the two
    sum = numA + numB;
    difference = numA - numB;
    product = numA + numB;
    division = (double)numA / numB;
    remainder = numA % numB;
    
    // Show inputs and outputs
    cout << "_______________________________" << endl << endl;
    cout << "Integer arithmetic" << endl;
    cout << "The first number: " << numA << endl;
    cout << "The second number: " << numB << endl;
    cout << "Addition: " << sum << endl;
    cout << "Difference:" << difference << endl;
    cout << "Mutiplication: " << product << endl;
    cout << "Division:" << division << endl;
    cout << "Remainder" << remainder << endl;
    
    // Show application close
    cout << "nEnd of Game Gridders" << endl << endl;
    
    // Pause before application window closes
    cout << "Press any key to exit ..." << endl;
    
    return 0;
    
}
