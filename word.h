#ifndef WORD_H_
#define WORD_H_
#include <iostream>
#include <string>
using namespace std;

class word {

    int wordCnt;            // 입력할 단어의 개수를 저장하는 변수.
    string wordSpell;       // 스펠링을 저장하는 변수.
    string wordMean;        // 뜻을 저장하는 변수.
    string wordPos;         // 품사를 저장하는 변수.
    string wordPro;          // 발음기호를 저장하는 변수.


public:

    void setWordCnt(int wordCnt) {
        this->wordCnt = wordCnt;
    }

    int getWordCnt() {
        return wordCnt;
    }

    void setSpell(string spell) {
        this->wordSpell = spell;
    }

    string getSpell() {
        return wordSpell;
    }

    void setMean(string mean) {
        this->wordMean = mean;
    }

    string getMean() {
        return wordMean;
    }

    void setPos(string pos) {
        this->wordPos = pos;
    }

    string getPos() {
        return wordPos;
    }

    void setPro(string pro) {
        this->wordPro = pro;
    }

    string getPro() {
        return wordPro;
    }

};

    
    void addWord() {    // 단어를 추가하는 함수.

        // 1. 단어의 개수 입력 받기.

        int saveNum;    // 사용자가 입력한 숫자를 저장할 변수.
        word num;       // 숫자 저장에 쓰일 오브젝트 생성.
        cout << "저장할 단어의 개수를 입력해주세요 : " << endl;
        cin >> saveNum;
        num.setWordCnt(saveNum);    // 오브젝트명.함수명.(파라미터);

        // 2. 단어의 스펠링, 뜻, 품사, 발음기호 입력 받기.

        string saveSpell;
        word spell;
        cout << "저장할 단어의 스펠링을 입력해 주세요 : " << endl;
        cin.ignore();
        getline(cin, saveSpell);
        spell.setSpell(saveSpell);

        string saveMean;
        word mean;
        cout << "저장할 단어의 뜻을 입력해 주세요 : " << endl;
        cin.ignore();
        getline(cin, saveMean);
        mean.setMean(saveMean);

        string savePos;
        word pos;
        cout << "저장할 단어의 품사를 입력해 주세요 : " << endl;
        cin.ignore();
        getline(cin, savePos);
        spell.setPos(savePos); 

        string savePro;
        word pro;
        cout << "저장할 단어의 발음기호를 입력해 주세요 : " << endl;
        cin.ignore();
        getline(cin, savePro);
        pro.setPro(savePro);


        // 3. 입력받은 항목을 배열에 저장하기
        
        int index = num.getWordCnt();
        string spell = spell.getSpell();
        string mean = mean.getMean();
        string pro = pro.getPro();

        string strIndex = to_string(index);

        for(int i=0; i<saveNum; i++) {
            

        }



        }


        



    







#endif /* WORD_H_ */
