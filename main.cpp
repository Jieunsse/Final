#include <iostream>
#include <fstream>
#include "ASCII.h"
#include "title.h"
#include "word.h"
using namespace std;


// 단어랑 뜻 저장하는 배열. getline() 이용해서 공백문자 포함해 받기.
// 단어 검색하는 기능 >> if( == ) 으로 반복문?

// 영어 시험 메뉴 구현 : 
    // 정답여부 안내 
    // Q or q가 입력될 때 까지 반복.
    // 몇 개 맞췄는지 출력.

// 단어장 출력 : 단어장에 등록된 전체 단어들을 나열하기.



int main() {

    // 프로그램의 타이틀 출력하는 함수. ("title.h", "ASCII.h"에 구현됨.)
    printTitle();    


    // 메뉴를 출력하고 사용자가 원하는 메뉴를 입력받기.
    int menuNum;     // 사용자가 입력한 메뉴를 저장하는 변수.
    
    cout << "원하는 메뉴를 선택해 주세요! :) \n" << endl;
    cout << " 1. 단어 등록하기 \n" << endl;
    cout << " 2. 단어 검색하기 \n" << endl;
    cout << " 3. 단어 시험보기 \n" << endl;
    cout << " 4. 등록된 단어목록 확인하기 \n" << endl;
    cout << " 5. 도움말 살펴보기 \n" << endl;
    cout << " 0. 프로그램 종료하기 \n" << endl;

    cout << "원하는 메뉴를 입력해 주세요 : \n" << endl;
    cin >> menuNum;
    

    // 인덱스에 따른 메뉴 실행.

    if(menuNum == 1) {          // 단어 등록하기
        addWord();  // "word.h"
    } else if (menuNum == 2) {  // 단어 검색하기

    } else if (menuNum == 3) {  // 단어 시험보기
        
    } else if (menuNum == 4) {  // 등록된 단어목록 확인하기

    } else if (menuNum == 5) {  // 도움말 살펴보기

    } else if (menuNum == 0) {  // 프로그램 종료하기
        cout << "\n" << "프로그램을 종료합니다 :) " << endl;
    } else cout << "잘못된 입력입니다. " << endl;
   
    return 0;

} 















