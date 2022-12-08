#ifndef TITLE_H_
#define TITLE_H_
#include <iostream>
#include <string>
using namespace std;


void drawLine() {   // 아스키코드 위, 아래로 구분선을 그려주는 함수.
    
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;

}


void printTitle() {       // 프로그램 제목 출력하기

    drawLine();
    string fileName = "ascii.txt";
    printAscii(fileName);
    drawLine();
    cout << "\n";
    cout << " *** Created by 20221337 옥지훈  *** " << endl;
    cout << "\n" << "\n";
    cout << "단어장 프로그램이 시작되었습니다 ! " << endl;
    cout << "\n" << "\n";
    
}




#endif /* TITLE_H_ */