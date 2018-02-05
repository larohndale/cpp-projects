#include <iostream>
#include <iomanip>
using namespace std; 
int main() {
double first_number;
double second_number;
    cout << setprecision(2);
    cout << "Give me a number: ";
    cin >> first_number; 
    cout << "Give me a second number: ";
    cin >> second_number; cout << endl; 
    cout << "The sum of the two numbers: " << first_number + second_number << endl; 
    cout << first_number << " + " << second_number << " = " << first_number+second_number << endl;
    
    cout << "The difference of two numbers: " << first_number-second_number << endl; 
    cout << first_number << " - " << second_number << " = " << first_number-second_number << endl;
    
    cout << "The product of the two numbers: " << first_number * second_number << endl;
    cout << first_number << " * " << second_number << " = " << first_number*second_number << endl; 
    
    cout << "The quotient of the two numbers: " << first_number / second_number << endl;
    cout << first_number << " / " << second_number << " = " << first_number/second_number << endl; 
    
    //cout << " with a remainder of: " << first_number % second_number << endl; 

    return 0; 

}