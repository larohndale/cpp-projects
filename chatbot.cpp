#include <iostream>
#include <string> 
int main() {
    std::string name;
    std::string age; 
    std::string favorite_food;
    std::string number_of_pets; 
    std::string favorite_movie; 
    std::string kitty;

    std::cout << "What is your name?\n";
    getline(std::cin, name);
    std::cout << "Nice to meet you, " << name << "!\n";

    std::cout << "What is your age?\n";
    getline(std::cin, age);
    std::cout << "Ah, I remember when I was " << age << "!\n";

    std::cout << "What is your favorite food?\n";
    getline(std::cin, favorite_food);
    std::cout << "I also enjoy, " << favorite_food << "!\n";

    std::cout << "How many pets do you own?\n";
    getline(std::cin, number_of_pets);
    std::cout << "I love animals!\n";

     std::cout << "What is your favorite movie?\n";
    getline(std::cin, favorite_movie);
    std::cout << " The movie " << favorite_movie << " is really good!\n";

    
    
    std::cin.ignore(); 

    return 0;
}