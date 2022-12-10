#ifndef SEARCH_H_
#define SEARCH_H_
#include <iostream>
#include <string>
#include "word.h"
using namespace std;

// 영어단어를 검색하면 해당 단어의 뜻을 출력하는 기능 구현하기. 

template <typename S>

class search {

    S search;

public:

    void setSearch(string search) {
        this->search = search;
    }

    string getSearch() {
        return search;
    }

};


void wordSearch() {
    string userInput;

}





#endif /* SEARCH_H_*/