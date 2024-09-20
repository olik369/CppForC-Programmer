#include <iostream>

/*
* 관계에 관해 생각하지 않는다면 함수를 포함하는 구조체로 이해
* 생성자, 소멸자 등 문법 상 자동으로 호출되는 함수가 존재 ***(중요)
* C++는 struct가 존재하지 않는 것으로 볼 수 있음
* 구성요소(변수나 함수)를 멤버라 지칭
* 
* 
* 클래스의 특징
* 함수는 클래스 인스턴스의 메모리 공간을 소모하지 않음(name mangling가 유사하게 이름을 고유하게 바꿔서 호출함)
* 여러 인스턴스가 각각 함수코드를 별도로 갖는 것이 아님
* 클래스 멤버함수라 하더라도 결국 C언어의 함수처럼 존재함
*/
using namespace std;

class UserData
{
public:	// 접근 제어 지시자
	int age;
	char name[32];

	void print()
	{
		printf("%d, %s\n", age, name);
	}
};

int main()
{
	UserData user = { 10, "Hoon" };
	user.print();
	return 0;
}