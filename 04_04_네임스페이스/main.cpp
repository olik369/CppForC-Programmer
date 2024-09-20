#include <iostream>

/*
* 변수명의 중복을 대비하기 위한 문법
* 식별자::변수명
* 
* C언어의 전역변수는 C++문법상 전부 Global namespace에 속함
* 
* namespace는 중첩이 가능함
*/

using namespace std;

int data = 50;

void testFunc()
{
	cout << "::TestFunc()" << endl;
}

namespace Test
{
	int data = 100;

	void testFunc()
	{
		cout << "Test::TestFunc()" << endl;
	}

	namespace Test1
	{
		int data = 90;
	}
}

int main()
{
	::testFunc();
	Test::testFunc();
	cout << "Test::data : " << Test::data << endl;
	cout << "::data : " << ::data << endl;
	cout << "Test::Test1::data : " << Test::Test1::data << endl;
	return 0;
}