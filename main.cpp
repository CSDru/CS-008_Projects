#include <iostream>
#include <filesystem>
#include "functions.h"

int main()
{
    std::cout << "Current working directory: " << std::filesystem::current_path() << std::endl;
    binaryToDecimalFile("binary.txt", "decimal.txt");
    return 0;
}