// this was a lot trickier than I thought it would be. 
// I had to use a lot of escape characters to get the output to work correctly. And learn about raw string literals.
#include <iostream>
int main() {
    char q = 34; 
    std::string program = "#include <iostream>\nint main() {\n    char q = 34;   \"\n    std::string program = ";
    std::string program_end = ";\n    std::cout << program << q << program << q << program_end << std::endl;\n    return 0;\n}";
    std::cout << program << q << program << q << program_end << std::endl;
    return 0;
}


// Output
// #include <iostream>
// int main() {
//     char q = 34;  "
//     std::string program = "#include <iostream>
// int main() {
//     char q = 34;"
//     std::string program = ";
//     std::cout << program << q << program << q << program_end << std::endl;
//     return 0;
// }