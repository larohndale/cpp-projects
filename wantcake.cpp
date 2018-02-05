// Title: Cake?
// Concepts: char, yes or no

#include <iostream> 
using namespace std; 

int main(){
    char answer; 
    cout << "Would you like to some cake? (Type Y for yes or N for no) " << endl;
    cin >> answer; 
    if(answer=='y') {
        int number; 
        cout << "How many pieces of cake would you like?" << endl; 
        cin >> number; cout << endl; 
        cout << number << " pieces of cake coming right up!" << endl; 
    }
    else {
        cout << "What else would you like?";
    }
    return 0; 
}