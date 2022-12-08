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

    void setMeaning(string meaning) {
        this->meaning =  meaning;
    }

    string getMeaning() {
        return meaning;
    } 

};

void addWord() {
    dictionary<int> num;
    dictionary<string> printWord;
    int wordCnt;   // 저장할 단어의 개수를 저장할 변수.


    // 단어 개수 입력 받기.
    cout << "저장하고 싶은 단어의 개수를 입력해 주세요 : " << endl;
    cin >> wordCnt;    // 입력받은 개수 저장.
    num.setNum(wordCnt);    // T num에 입력받은 개수 저장.
    
   
    // 단어의 스펠링 입력받기.

    for(int i=0; i<wordCnt; i++) {
        dictionary<string> word;
        string spell[wordCnt];
        string meaning[wordCnt];
       
       
        cout << "단어의 철자를 입력해 주세요 : " << endl;
        cin.ignore();
        getline(cin, spell[wordCnt]);
        word.setWord(spell[wordCnt]);

        cout << "단어의 의미를 입력해 주세요 : " << endl;
        cin.ignore();
        getline(cin, meaning[wordCnt]);
        word.setMeaning(meaning[wordCnt]);
        
        
    }
  
    
}





#endif /* WORD_H_ */