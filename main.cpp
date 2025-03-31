/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: sjmcf
 *
 * Created on March 30, 2025, 2:56 PM
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    // Step 1: Open the file for reading
    std::ifstream inputFile("numbers.txt");
    if (!inputFile) {
        std::cerr << "Error: Could not open the file for reading.\n";
        return 1;
    }

    // Step 2: Read integers into a vector
    std::vector<int> numbers;
    int num;
    while (inputFile >> num) {
        numbers.push_back(num);
    }
    inputFile.close(); // Close the file after reading

    // Step 3: Sort the integers
    std::sort(numbers.begin(), numbers.end()); // Corrected typo: "numbers" to "numbers"

    // Step 4: Write the sorted integers back to the file
    std::ofstream outputFile("numbers.txt");
    if (!outputFile) {
        std::cerr << "Error: Could not open the file for writing.\n";
        return 1;
    }

    for (const int &n : numbers) {
        outputFile << n << " ";
    }
    outputFile.close(); // Close the file after writing

    std::cout << "The integers have been sorted and written back to the file.\n";

    return 0;
}

