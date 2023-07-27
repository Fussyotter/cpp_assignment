// this was a lot trickier than I thought it would be. 
// I had to use a lot of escape characters to get the output to work correctly. And learn about raw string literals.
#include<iostream>
int main() {
    char q = 34; 
    std::string raw_start = "R\"(";
    std::string raw_end = ")\"";
    std::string program = "#include<iostream>\nint main() {\n    char q = 34;\n    std::string raw_start = \"R\\\"( \";\n    std::string raw_end = \" )\\\"\";\n    std::string program = ";
    std::string program_end = ";\n    std::string program_end = ";
    std::string program_end2 = ";\n    std::cout << raw_start << program << q << program << q << program_end << q << program_end << q << raw_end << \"\\n\" << raw_start << program_end << q << program_end << q << program_end2 << q << program_end2 << q << raw_end << std::endl;\n    return 0;\n}";
    std::cout << raw_start << program << q << program << q << program_end << q << program_end << q << raw_end << "\n" << raw_start << program_end << q << program_end << q << program_end2 << q << program_end2 << q << raw_end << std::endl;
    return 0;
}

// Output
// R"(#include<iostream>
// int main() {
//     char q = 34;
//     std::string raw_start = "R\"( ";
//     std::string raw_end = " )\"";
//     std::string program = "#include<iostream>
// int main() {
//     char q = 34;
//     std::string raw_start = "R\"( ";
//     std::string raw_end = " )\"";
//     std::string program = ";
//     std::string program_end = ";
//     std::string program_end = ")"
// R"(;
//     std::string program_end = ";
//     std::string program_end = ";
//     std::cout << raw_start << program << q << program << q << program_end << q << program_end << q << raw_end << "\n" << raw_start << program_end << q << program_end << q << program_end2 << q << program_end2 << q << raw_end << std::endl;
//     return 0;
// }";
//     std::cout << raw_start << program << q << program << q << program_end << q << program_end << q << raw_end << "\n" << raw_start << program_end << q << program_end << q << program_end2 << q << program_end2 << q << raw_end << std::endl;
//     return 0;
// }")"