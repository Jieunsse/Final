#ifndef TEST_H_
#define TEST_H_
#include <iostream>
#include <string>
using namespace std;


class test {

    int bringIndex;
    string bringWords;
    string bringMeans;

public:

    void setBringIndex(int bringIndex) {
        this->bringIndex = bringIndex;
    }

    int getBringIndex() {
        return bringIndex;
    }

    void setBringWords(string bringWords) {
        this->bringWords = bringWords;
    }

    string getBringWords() {
        return bringWords;
    }

    void setBringMeans(string bringMeans) {
        this->bringMeans = bringMeans;
    }

    string getBringMenas() {
        return bringMeans;
    }


};





#endif /* TEST_H_ */