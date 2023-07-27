// this was a lot trickier than I thought it would be. 
// I had to use a lot of escape characters to get the output to work correctly. And learn about raw string literals.

#include <cstdio>

int main() {
    auto a = "int main() {auto a=%c%s%c; std::printf(a,34,a,34);}";
    std::printf(a, 34, a, 34);
}

// int main() {auto a="int main() {auto a=%c%s%c; std::printf(a,34,a,34);}"; std::printf(a,34,a,34);}