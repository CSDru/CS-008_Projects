//
// Created by Dru on 8/29/2024.
//

#ifndef CS8_FALL24_FILEIO_FUNCTIONS_H
#define CS8_FALL24_FILEIO_FUNCTIONS_H
/// Read a file containing binary numbers
/// Convert the binary to decimal
/// write the new number to a new file;

#include <string>
#include <fstream>
#include <iostream>

void binaryToDecimalFile(const std::string& binaryFileName,
                         const std::string& decimalFileName);
int convertToDecimal (const std::string& binaryStr);

#endif //CS8_FALL24_FILEIO_FUNCTIONS_H
