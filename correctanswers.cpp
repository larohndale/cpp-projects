// Title: Incorrect Answer 
// Concepts: Learned the if statement that goes with the else statement

#include <iostream> 
using namespace std;

int main() {
    int user_number; 
    int correct_answer = 4;
    
    cout << "What is 2 + 2? ";
    cin >> user_number;
    
    if(user_number == correct_answer) {
        cout << "Correct Answer!" << endl;
    }
    else {
    cout << "Wrong Answer! 2 + 2 = 4" << endl; 
    }

    return 0; 
}
