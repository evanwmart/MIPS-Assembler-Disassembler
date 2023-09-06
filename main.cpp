
#include <iostream>
#include <string>
#include "assemble.h"
#include "disassemble.h"

int main(int argc, char *argv[])
{
    if (argc != 4) // If inproper args passed
    {

        std::cout << "Program usage: " << argv[0] << " {sourceFile} {outputLocation} {Flag}" << std::endl;
        std::cout << "-Flag can be either:\n\t-a: convert MIPS assembly to binary\n\t-d: convert binary to assembly" << std::endl;

        return 1;
    }
    else // If 3 arguments passed
    {

        if (argv[0] == "-a")
        {
            assemble(argv[1], argv[2]);

            return 0;
        }
        else if (argv[0] == "-d")
        {
            disassemble(argv[1], argv[2]);

            return 0;
        }
        else
        {
            std::cout << "Inproper flag." << std::endl;
            std::cout << "-Flag can be either:\n\t-a: convert MIPS assembly to binary\n\t-d: convert binary to assembly" << std::endl;

            return 1;
        }
    }
}
