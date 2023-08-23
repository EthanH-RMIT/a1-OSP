/**
 * startup code provided by Paul Miller for COSC1114 - Operating Systems
 * Principles
 **/

#include "writer.h"

/**
 * provide your implementation for the writer functions here
 **/
writer::writer(const std::string& name):out(name) {
    if(!out.is_open()){
        std::cerr << "Unable to locate file to write to" << std::endl;
    }
}

void writer::run() {
    while (!queue.empty()){
        out << queue.front() << '\n';
        queue.pop_front();
        this->printQueue();
    }
}

void writer::append(const std::string& line) {
    queue.push_back(line);
    this->printQueue();
}

void writer::printQueue() {
    std::cout << "queue is: " << std::endl;
    for (const std::string& line : queue) {
        std::cout << line << std::endl;
    }
}
