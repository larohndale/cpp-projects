// Title: Multiple Choice Question
// Concept: switch, break
#include <iostream> 
using namespace std; 

int main() {
    char answer;
    cout << "Who is 007? " << endl
        << "a. Homer Simpson\n"
        << "b. Reggie Jackson\n"
        << "c. Jason Bourne\n"
        << "d. James Bond\n"
        << "(type the correct letter and then press enter)\n";
        cin >> answer; 
        switch (answer) {
            case 'a': cout << "Not right, but he would be a great agent.\n";
                break;
            case 'b': cout << "No, not quite!\n";
                break;
            case 'c': cout << "Almost but not the guy we are looking for.\n";
                break;
            case 'd': cout << "Exactly thats the secret agent!\n";
                break; 
            default: cout << "That was not an answer choice!\n";
        }


    return 0; 
}