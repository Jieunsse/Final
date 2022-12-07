#include <iostream>
using namespace std;

template <typename T>

class Box {

public:
	T data;

	Box(T value = 0) {	// 디폴트 매개변수를 주면, 객체 생성시 값을 주지 않아도 됨.
		data = value;
	}

	void print() {
		cout << "Data : " << data << endl;
	}

	T getData() {
		return data;
	}

	void setData(T value) {
		data = value;
	}

};


int main() {

	Box<int> intBox(7);	// 디폴트 매개변수 설정을 하지 않았다면 다음과 같이 파라미터를 줘야 함.
	intBox.data = 8;
	intBox.print();
	intBox.setData(11);

	cout << "Data : " << intBox.getData() << endl;


	Box<char> charBox('#');
	charBox.print();
	charBox.setData('&');

	cout << "Data : " << charBox.getData() << endl;

	return 0;
}


// Box라는 클래스를 만들어놓고 필요한 type에 따라 적재적소 사용 가능.

// Box라는 클래스가 T라는 타입이 실제로 기계어로 컴파일시 번역되지 않음.
// T는 그냥 치환되기 위한 변수일 뿐.
// T는 기계어로 번역되지 않는다.
// Box<type> : <> 속의 타입을 T자리에 치환한 클래스를 컴파일러가 만들고 만들어진 클래스를 기계어로 번역.
// 실제로 메모리상에는 여러가지 타입으로 변환된 클래스가 저장됨.

