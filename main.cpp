#include <iostream>
#include <string>

void printHello(const std::string& name, int style) {
    switch (style) {
        case 1:
            std::cout << "Greetings, " << name << "!\n";
            break;
        case 2:
            std::cout << "Hello, " << name << "!\n";
            break;
        default:
            std::cout << "Wrong style\n";
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Usage example: " << argv[0] << " %name %style(number from 1 to 2)\n";
        return 0;
    }
    printHello(argv[1], std::atoi(argv[2]));
   
    return 0;
}