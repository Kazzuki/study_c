#include <iostream>
#include <string>
#include <vector>

int main(void) {
    std::vector<int> dnaLen;
    std::vector<std::string> dnaSeq;
    
    dnaLen.push_back(5);
    dnaSeq.push_back("CAGTT");

    dnaLen.push_back(3);
    dnaSeq.push_back("GCC");

    dnaLen.push_back(10);
    dnaSeq.push_back("CCTAGATATA");

    for (int i = 0; i < dnaLen.size(); i++) {
        std::cout << dnaSeq[i] << " : " << dnaLen[i] << std::endl;
    }
    // CAGTT : 5
    // GCC : 3
    // CCTAGATATA : 10
    
    std::cout <<  "test" << std::endl;
    return 0;
}