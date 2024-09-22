#include <iostream>
#include "CMyString.h"

/*
* 가변 길이 문자열을 다루기 위한 클래스로 개발
* 동적 할당된 메모리에 문자열을 저장
* 문자열 처리를 위한 메모리 할당 및 해제와 관련 편의성을 사용자에게 제공
* 포인터 멤버를 갖는 것이 특징
*/

using namespace std;

int main()
{
	CMyString hello;
	hello.setData("Hello");
	cout << hello.getData() << endl;
	cout << "length: " << hello.getLength() << endl;
	//*(hello.getData()) = 'A';
	return 0;
}