#include <iostream>
using namespace std;

template <typename T>	// 타입 치환 변수 사용하기 위해 선언.

class Box {

public:

	T data;		// T 변수명;

	Box(T value = 0) {	// 디폴트 매개변수를 주면, 객체 생성시 값을 주지 않아도 됨.
		data = value;	// 파라미터를 data에 할당.
	}

	void print() {	// data를 출력하는 함수.
		cout << "Data : " << data << endl;
	}

	T getData() {	// Data에 대한 getter 함수.
		return data;
	}

	void setData(T value) {	// Data에 대한 setter 함수.
		data = value;
	}

};


int main() {

	Box<int> intBox;		// 메인에서 사용할 변수 만들고.
	intBox.data = 8;		// data에 8 할당.
	intBox.print();			// data 출력
	intBox.setData(11);		// data값에 11 할당.

	cout << "Data : " << intBox.getData() << endl;


	Box<char> charBox('#');	// 디폴트 매개변수 설정을 하지 않았다면 다음과 같이 파라미터를 줘야 함.
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

