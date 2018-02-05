// Title: Favorite Birthday Food
// Concepts: srand, rand, %, <time.h>, time(NULL)

#include <iostream>
#include <string>
#include <time.h>
using namespace std; 

int main() {
    srand(time(NULL));
    string favorite_food;
    cout << "What is your favorite food? ";
    getline(cin, favorite_food);
    cout << "I will give you " << rand()%10 +1 << " " << favorite_food << " for your Birthday!" << endl; 
    return 0;
}