#include <iostream>
#include <string>
#include <vector>

int main(void) {
    std::vector<std::string> dnaSeq;
    dnaSeq.push_back("CAGTT");
    dnaSeq.push_back("GCC");
    dnaSeq.push_back("CCTAGATATA");

    std::cout << dnaSeq.size() << std::endl;
    // 3
    std::cout << dnaSeq.empty() << std::endl;
    // 0

    dnaSeq.clear();

    std::cout << dnaSeq.size() << std::endl;
    // 0
    std::cout << dnaSeq.empty() << std::endl;
    // 1
    
    return 0;
}