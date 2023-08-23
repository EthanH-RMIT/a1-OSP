/**
 * startup code provided by Paul Miller for COSC1114 - Operating Systems
 * Principles
 **/
#include "reader.h"
#include "writer.h"
#include <cstdlib>
/* global variables if needed go here */
int main(int argc, char** argv) {
    /* check command line arguments */
    /* load the file and copy it to the destination */
    writer myWriter("output.txt");
    reader myReader("input.txt", myWriter);
    myReader.run();
    myWriter.run();
    return EXIT_SUCCESS;
}
