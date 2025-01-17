#include <algorithm>
#include <iostream>
#include <fstream>

void fileInput(const std::string adminMsg) {

    std::string inputString;

    std::cout << adminMsg;
    std::cin >> inputString;

    //creating a file input/output stream using fstream because the file is already created
    //std::ios::app is used to append the file, adding the text at the end
    std::fstream fio;
    fio.open("C:/Users/Jake/OneDrive/Desktop/Folder/School/CSU Global/CSC450 - Programming 3/CSC450_CT5_mod5.txt", std::ios::app);
    fio << inputString;

    //create a pointer at the beginning of the file with an offset of 0
    fio.seekg(0, std::ios::beg);

    //new string variable to hold the text file data and a fstream read function
    std::string fileText;
    std::fstream readFio("C:/Users/Jake/OneDrive/Desktop/Folder/School/CSU Global/CSC450 - Programming 3/CSC450 CTA5CSC450_CT5_mod5.txt");

    //a while loop to print the file to the console, confirming the user input worked
    while (getline (readFio, fileText)) {
        std::cout << fileText;
    }
    fio.close();
}

void textReverse() {

    std::string reversedString;
    std::fstream readFio("C:/Users/Jake/OneDrive/Desktop/Folder/School/CSU Global/CSC450 - Programming 3/CSC450 CTA5CSC450_CT5_mod5.txt");
    readFio.seekg(0, std::ios::beg);

    while (getline (readFio, reversedString)) {
        readFio >> reversedString;
    }
    std::cout << reversedString;

    //built in C++ function to reverse data or elements (applies the reversal to the original variable)
    reverse(reversedString.begin(), reversedString.end());
    std::cout << "\n" << reversedString;

    //create a new file and write the reversedString to it
    std::fstream reversedFio("C:/Users/Jake/OneDrive/Desktop/Folder/School/CSU Global/CSC450 - Programming 3/CSC450_CT5_mod5_reverse.txt");
    reversedFio << reversedString;

    reversedFio.close();
}

int main() {

    fileInput("Please enter a string to be added to the text file. \n");
    textReverse();

}
