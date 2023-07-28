#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::string line;
    std::ifstream file(__FILE__);
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    return 0;
}
