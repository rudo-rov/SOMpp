// SOM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "antlr4-runtime/SOMLexer.h"
#include "antlr4-runtime/SOMParser.h"

int main(int argc, char** argv)
{
    // Check the input arguments number
    if (argc <= 1) {
        std::cerr << "Invalid input arguments\n";
        return 1;
    }

    // Open the SOM source file
    std::ifstream input;
    input.open(argv[1]);
    if (!input) {
        std::cerr << "Unable to open SOM source file: " << argv[1] << std::endl;
        return -1;
    }

    antlr4::ANTLRInputStream inputStream(input);
    SOMLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    SOMParser parser(&tokens);
}


