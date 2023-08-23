/**
 * startup code provided by Paul Miller for COSC1114 - Operating Systems
 * Principles
 **/
#include "reader.h"
#include <functional>

reader::reader(const std::string& name, writer& mywriter):in(name), thewriter(mywriter){
    if(!in.is_open()){
        std::cerr << "cannot read input file" << std::endl;
    }
}

void reader::run() {
    std::string line;
    while(std::getline(in, line)){
        std::cout << line << std::endl;
        thewriter.append(line);
    }
}
