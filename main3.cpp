#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::string line;
    // __FILE__ and ifstream made this a lot simpler
    std::ifstream file(__FILE__);
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    return 0;
}
