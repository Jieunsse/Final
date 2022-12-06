// 클래스 안에 변수 선언하고 setter, getter 함수 선언하기
// 메인 함수 안에서 setter 함수를 통해 변수에 100을 할당하기
// 100이 할당된 변수를 getter 함수를 통해서 출력하기

#include <iostream>
using namespace std;

class Text {
    
private:
    int num;

public:

    void setNum(int num) {
        this->num = num;
    }

    int getNum() {
        return num;
    }
};

int main() {
    Text t;
    int a;
    t.setNum(3);
    a = t.getNum();
    cout << a << endl;
}


