//
// Created by Dru on 8/29/2024.
//

#include "functions.h"

void binaryToDecimalFile(const std::string& binaryFileName,
                         const std::string& decimalFileName)
{
    std::ifstream fin;
    std::ofstream fout;
    std::string next;
    fin.open(binaryFileName);
    fout.open(decimalFileName);

    if(fin.fail())
    {
        std::cout << "Could not open file";
        exit(2);
    }

    while(getline(fin, next))
    {
        fout << convertToDecimal(next);
    }

    fin.close();
    fout.close();
}

int convertToDecimal(const std::string &binaryStr) {
    int decimalValue = 0;
    for (char digit : binaryStr) {
        decimalValue = (decimalValue << 1) | (digit - '0');
    }
    return decimalValue;
}
