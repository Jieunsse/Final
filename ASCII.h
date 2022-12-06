#ifndef ASCII_H_
#define ASCII_H_
#include <iostream>
#include <string>
#include <fstream> 
using namespace std;


void printAscii(string fileName) {

    string line = "";
    ifstream inFile;
    inFile.open("ascii.txt");
    if(inFile.is_open()) {
        while(getline(inFile, line)) {
            cout << line << endl;
        }
    }
    else {
        cout << "File failed to load. " << endl;
        cout << "No ASCII displayed. " << endl;
    }
    inFile.close();
}





#endif /* ASCII_H_ */