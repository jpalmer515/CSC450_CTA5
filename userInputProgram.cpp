#include <iostream>
#include <fstream>

void fileInput(const std::string adminMsg) {

    std::string inputString;

    std::cout << adminMsg;
    std::cin >> inputString;

    //creating a file input/output stream using fstream because the file is already created
    //std::ios::app is used to append the file, adding the text at the end
    std::fstream fio;
    fio.open("CSC450_CT5_mod5", std::ios::app);

    //Create a pointer at the beginning of the file with an offset of 0
    fio.seekg(0, std::ios::beg);

    //A while loop to print the file to the console, confirming the user input worked
    while (fio.good()) {
        std::cout << inputString;
    }
    fio.close();
}

void textReverse(std::string userInputs) {

}

int main() {

    fileInput("Please enter a string to be added to the text file. ");

}
