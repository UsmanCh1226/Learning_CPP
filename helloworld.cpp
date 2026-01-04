#include <iostream>

int main() 
{
    std::string name;

    while(1==1) {
        std::cout << "HELP! I'M STUCK IN A INFINITE LOOP ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;



    return 0;
}
