#include <iostream>

/*
* - 메서드
* static 반환자료 클래스명::함수명() const
* 클래스에 속한 멤버 함수
* static 선언 시 "정적 멤버 함수"라고 명확히 분류
* const 선언 시 상수화 된 멤버로 분류 => 멤버 변수를 메서드 내에서 변화시킬 필요가 없는경우 사용(ex. getter함수)
* virtual 선언 시 가상 함수로 분류
* 
* - 메서드와 thiscall 호출규약
* this포인터는 클래스의 실제 인스턴스에 대한 주소를 가리키는 포인터
* "클래스 코드 수준(현재)에서 앞으로(미래)사용자 코드에 등장할 실제 인스턴스"의 주소를 접근할때 사용
* 모든 메서드는 "숨겨진 첫 번째 인수로 this포인터"를 전달
*/

using namespace std;

// this 포인터
class MyData
{
public:
	MyData() = default;

	void printData()
	{
		cout << data << endl;
		cout << MyData::data << endl;
		cout << this->data << endl;
		cout << this->MyData::data << endl;
	}

	void SetData(int data) { this->data = data; }
	int GetData() { return data; }
private:
	int data = 0;
};

void Practice1();
void Practice2();

int main()
{
	//Practice1();
	Practice2();

	return 0;
}

void Practice1()
{
	MyData a;
	a.printData();
}

void Practice2()
{
	MyData a;
	a.printData();
	a.SetData(10);
	a.printData();

	MyData b;
	b.SetData(20);
	cout << "b:" << b.GetData() << endl;
}