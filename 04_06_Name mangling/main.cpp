#include <iostream>

/*
* C++의 식별자 이름은 컴파일러에 의해 C언어처럼 유일한 이름으로 자동변경 => name mangling
* 함수 다중 정의의 작동원리
* 식별자의 실제 이름은 링크오류를 발생시켜 확인 가능
* 
* name mangling을 강제로 막을려면 extern "C"를 사용하면됨
*/

using namespace std;

int main()
{
	return 0;
}