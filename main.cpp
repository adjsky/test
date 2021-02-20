#include <iostream>
#include <string>

void printHello(const std::string& name) {
    std::cout << "Hello, " << name << "!\n";
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage example: " << argv[0] << " %name\n";
        return 0;
    }
    printHello(argv[1]);
   
    return 0;
}