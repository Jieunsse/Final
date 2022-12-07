#ifndef WORD_H_
#define WORD_H_
#include <iostream>
#include <string>
using namespace std;

template <typename T>

class dictionary {

    T num;
    T word;
    T meaning;

public:

    void setNum(int num) {
        this->num = num;
    }

    int getNum() {
        return num;
    }

    void setWord(string word) { // 단어를 저장하는 함수.
        this->word = word;
    }

    string getWord() {
        return word;
    }

    void setMeaing(string meaning) {
        this->meaning =  meaning;
    }

    string getMeaing() {
        return meaning;
    } 

};

void addWord() {
    dictionary<int> num;
    int wordQuantity;


    // 단어 개수 입력 받기.
    cout << "저장하고 싶은 단어의 개수를 입력해 주세요 : " << endl;
    cin >> wordQuantity;    // 입력받은 개수 저장.
    num.setNum(wordQuantity);    // T num에 입력받은 개수 저장.
    
   
    // 단어의 스펠링 입력받기.
    for(int i=0; i<wordQuantity; i++) {
        dictionary<string> word;
        string spell[wordQuantity];
       
       
        cout << "단어의 철자를 입력해 주세요 : " << endl;
        getline(cin, spell[wordQuantity]);
        word.setWord(spell[wordQuantity]);

        cout << word.getWord();
        
    }
    
}



#endif /* WORD_H_ */