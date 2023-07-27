#include <iostream>
#include <string>
#include <algorithm>    // std::reverse
// switch statement to get the complement of a base.
// this was the most straightforward way I could come up with
char getComplement(char base) {
    switch(base) {
        case 'A': return 'T';
        case 'T': return 'A';
        case 'G': return 'C';
        case 'C': return 'G';
        default: return '\0';    // null character
    }
}

// takes a string of DNA and returns the reverse complement
std::string getReverseComplement(std::string dna) {
    std::reverse(dna.begin(), dna.end());
    // auto is a fun thing that's new to me in C++
    // https://learn.microsoft.com/en-us/cpp/cpp/auto-cpp?view=msvc-170
    for(auto& base : dna) {
        base = getComplement(base);
    }
    return dna;
}
// main function, I added the complement or reverse complement for my own understanding
// might be useful for someone else too
int main() {
    std::string dna;
    int choice;
    std::cout << "Enter a DNA sequence: ";
    std::cin >> dna;
    std::cout << "Enter 1 for Complement or 2 for Reverse Complement: ";
    std::cin >> choice;
    if(choice == 1){
        for(auto& base : dna) {
            base = getComplement(base);
        }
        std::cout << "The complement is: " << dna << std::endl;
    }
    else if(choice == 2){
        std::cout << "The reverse complement is: " << getReverseComplement(dna) << std::endl;
    }
    else{
        std::cout << "Invalid choice!" << std::endl;
    }
    return 0;
}

