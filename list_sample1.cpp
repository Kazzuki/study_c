#include <iostream>
#include <string>
#include <list>

int main(void) {
    std::list<std::string> dnaSeq;
    
    dnaSeq.push_back("AAAAA");
    dnaSeq.push_back("CCCCC");
    dnaSeq.push_front("GGGGG");
    
    std::list<std::string>::iterator itr;

    for (itr = dnaSeq.begin(); itr != dnaSeq.end(); itr++) {
        std::cout << *itr << std::endl;
    }
    // GGGGG
    // AAAAA
    // CCCCC
    
    return 0;
}