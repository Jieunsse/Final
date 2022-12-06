#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int num;
    string *word, *meaning;

    cout << "저장할 단어의 수를 입력하세요: ";
    cin >> num;

    word = new string[num];
    meaning = new string[num];

    for (int i=0; i<num; i++)  {
        cout << "단어를 입력하세요: ";
        cin >> word[i];
        cout << "뜻을 입력하세요: ";
        cin >> meaning[i];
    }

 
}