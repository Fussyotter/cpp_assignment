// this was a lot trickier than I thought it would be. 
// there are previous commits that are trainwrecks
// this one does seem to work the best out of all those
#include <cstdio>

int main() {
    auto tricky = "int main() {auto tricky=%c%s%c; std::printf(tricky,34,tricky,34);}";
    std::printf(tricky, 34, tricky, 34);
}

// int main() {auto tricky="int main() {auto tricky=%c%s%c; std::printf(tricky,34,tricky,34);}"; std::printf(tricky,34,tricky,34);}