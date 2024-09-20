#include <iostream>

/*
* OOP환경에서 소프트웨어(소스코드)를 구성하는 단위 요소
* 변수 및 그와 관련한 메서드가 모여서 이뤄진 하나의 집합체
* C++에서는 클래스(Class)로 기술
* 클래스는 C언어의 구조체와 유사하며 변수와 함수를 멤버로 갖는 하나의 틀
*/

using namespace std;

//C 스타일 (자료와 함수의 의존성이 명백함, 그러나 C에서는 묶을 방법이 없음)
typedef struct USERDATA
{
	int age;
	char name[32];
} USERDATA;

void printUser(USERDATA* pUser)
{
	printf("%d, %s\n", pUser->age, pUser->name);
}

//C++ 스타일
class USERDATA_CLASS
{
public:
	int age;
	char name[32];

	void printUser()
	{
		printf("%d, %s\n", age, name);
	}
};

int main()
{
	USERDATA user = { 10, "Hoon" };
	printf("%d, %s\n", user.age, user.name);

	USERDATA_CLASS user_class = { 10, "Hoon" };
	user_class.printUser();
	return 0;
}