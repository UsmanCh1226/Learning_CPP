#include <iostream>

int main()
{
    char grade;

    std::cout << "What letter grade? : ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "Excellent!";
            break;

        case 'B':
            std::cout << "You did good";
            break;

        case 'C':
            std::cout << "You did OK";
            break;

        case 'D':
            std::cout << "You didn't do good";
            break;

        case 'F':
            std::cout << "You failed";
            break;

        default:
            std::cout << "Unknown grade";
            break;
    }

    return 0;
}

    


 