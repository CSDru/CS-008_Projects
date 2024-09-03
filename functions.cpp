//
// Created by Dru on 8/29/2024.
//

#include "functions.h"

void binaryToDecimalFile(const std::string& binaryFileName,
                         const std::string& decimalFileName)
{
    std::ifstream fin(binaryFileName);
    std::ofstream fout(decimalFileName);

    if (!fin.is_open()) // Check if input file opened successfully
    {
        std::cerr << "Error: Could not open the binary file: " << binaryFileName << std::endl;
        exit(1); // Exit if the input file fails to open
    }

    if (!fout.is_open()) // Check if output file opened successfully
    {
        std::cerr << "Error: Could not open the decimal file: " << decimalFileName << std::endl;
        exit(1); // Exit if the output file fails to open
    }

    std::string next;
    while (getline(fin, next))
    {
        fout << convertToDecimal(next) << std::endl; // Add a newline after each decimal value
    }

    fin.close();
    fout.close();
}

int convertToDecimal(const std::string &binaryStr) {
    int decimalValue = 0;
    int base = 1;
    for (int i = binaryStr.length() - 1; i >=0; --i) {
        if (binaryStr[i] == '1')
            decimalValue += base;
        else if(binaryStr[i] != '0') {
            std::cerr << "Error: Invalid character in binary string: " << binaryStr[i] << std::endl;
            return -1;
        }
    base *= 2;
    }
    return decimalValue;
}