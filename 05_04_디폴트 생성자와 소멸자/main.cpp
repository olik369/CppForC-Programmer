#include <iostream>

/*
* 생성자는 객체가 생성되는 시점에 자동으로 호출 되는 멤버 함수
* 객체의 생성은 인스턴스 선언 및 new연산에 따른 동적 생성 두 경우
* 다중 정의 가능
* 전역 인스턴스가 존재할 경우 main() 함수보다 생성자가 먼저 호출됨
* 
* 생성자 종류
* 디폴트 생성자 (이름 == class 이름)
* 매개변수를 갖는 다중 정의 생성자(변환 생성자 포함)
* 복사 생성자
* 이동 생성자
* 
* 소멸자
* 소멸자는 객체가 소멸하는 시점에 자동으로 호출되는 멤버함수
* 다중 정의 할 수 없음
* main() 함수가 끝난 후에도 호출될 수 있음
* 
* 생성자/소멸자 함수 사용주의
* 두 함수 모두 반환 자료가 없으며 문법에 따라 자동으로 호출
* 절대로 실패 할 수 없는 코드만 기술
* 메모리 동적 할당은 가급적 하지 말 것
* 객체 자체와 관련되지 않은 코드는 기술하지 말 것
*/

using namespace std;

class Test
{
public:
	Test()
	{
		cout << "Test::Test()" << endl;
	}

	~Test()
	{
		cout << "Test::~Test()" << endl;
	}
};

void Practice1()
{
	cout << "begin" << endl;
	Test test;
	cout << "end" << endl;
}

void Practice2()
{
	cout << "begin" << endl;
	Test* pTest = new Test;
	delete pTest;
	cout << "end" << endl;
}

int main()
{
	//Practice1();
	Practice2();
	return 0;
}

