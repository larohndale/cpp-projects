// Title: Voting Age 
// Concepts: Learned the if statement that goes with the else statement and I also learned the else if statement which is great in case I need to compare something 

#include <iostream> 
using namespace std;

int main() {
    int user_age; 
    int voting_age = 18; // Voting age in the USA
    
    cout << "What is your age? ";
    cin >> user_age;
    
    if(user_age == voting_age) {
        cout << "You are eligible to vote!" << endl;
    }
    else if(user_age < voting_age) {
    cout << "You are too young to vote!" << endl; 
    }
    else {
        cout << "You are eligible to vote!" << endl; 
    }

    return 0; 
}
