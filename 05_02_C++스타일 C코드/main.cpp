#include <iostream>
#include <stdio.h>

//C++ 스타일 C코드 예시 (자료와 함수가 떨어져서 정의해줘야함)
typedef struct USERDATA
{
	int age;
	char name[32];
	void(*printData)(struct USERDATA* pUser);	//함수 포인터를 변수로 넣음
} USERDATA;

void printData(USERDATA* pUser)
{
	printf("%d, %s\n", pUser->age, pUser->name);
}

using namespace std;

int main()
{
	USERDATA user = { 20, "철수", printData };
	user.printData(&user);

	//C++에서는 &user를 매개변수로 넘기는 행위를 없애기 위해 this포인터를 만듬
	//코드 제작자는 코드 작성시점에 미래시점 인스턴스의 주소를 알수가 없기때문

	return 0;
}