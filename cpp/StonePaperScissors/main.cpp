```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int computerChoice = rand() % 3 + 1;
    int userChoice;
    
    std::cout << "Welcome to Stone Paper Scissors!" << std::endl;
    std::cout << "1. Stone" << std::endl;
    std::cout << "2. Paper" << std::endl;
    std::cout << "3. Scissors" << std::endl;
    std::cout << "Enter your choice (1-3): ";
    std::cin >> userChoice;
    
    std::cout << "Computer chose: ";
    switch (computerChoice) {
        case 1:
            std::cout << "Stone" << std::endl;
            break;
        case 2:
            std::cout << "Paper" << std::endl;
            break;
        case 3:
            std::cout << "Scissors" << std::endl;
            break;
    }
    
    std::cout << "You chose: ";
    switch (userChoice) {
        case 1:
            std::cout << "Stone" << std::endl;
            break;
        case 2:
            std::cout << "Paper" << std::endl;
            break;
        case 3:
            std::cout << "Scissors" << std::endl;
            break;
    }
    
    if (userChoice == computerChoice) {
        std::cout << "It's a tie!" << std::endl;
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "Computer wins!" << std::endl;
    }
    
    return 0;
}
```