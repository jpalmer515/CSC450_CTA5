#include <iostream>
#include <fstream>

void fileInput(const std::string adminMsg) {

    std::string inputString;

    std::cout << adminMsg;
    std::cin >> inputString;

    //creating a file input/output stream using fstream because the file is already created
    //std::ios::app is used to append the file, adding the text at the end
    std::fstream fio;
    fio.open("CSC450_CT5_mod5.txt", std::ios::app);
    fio << inputString;

    //Create a pointer at the beginning of the file with an offset of 0
    fio.seekg(0, std::ios::beg);

    //new string variable to hold the text file data and a fstream read function
    std::string fileText;
    std::fstream readFio("CSC450_CT5_mod5.txt");

    //A while loop to print the file to the console, confirming the user input worked
    while (getline (readFio, fileText)) {
        std::cout << fileText;
    }
    fio.close();
}

// void textReverse() {
//
// }

int main() {

    fileInput("Please enter a string to be added to the text file. \n");
    //textReverse();

}
