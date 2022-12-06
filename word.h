#ifndef WORD_H_
#define WORD_H_
#include <iostream>
#include <string>
using namespace std;


class word {

private:
    int num;
    string word;
    string meaning;

public:

    void setWord(string word) {
        this->word = word;
    } 

    string getWord() {
        return word;
    }

    void setMeaning(string meaning) {
        this->meaning = meaning;
    }

    string getMeaning() {
        return meaning;
    }
};


 

#endif /* WORD_H_ */