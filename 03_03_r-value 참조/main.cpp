#include <iostream>

void Func1();
void Func2();
int Func3(int param);

int main()
{
	int input = 0;
	std::cout << "Input number: ";
	std::cin >> input;

	int&& rData = (input + 5);
	std::cout << rData << std::endl;

	//Func3에서 선언한 result 변수가 사라지지 않고 main함수가 끝날때 소멸함
	int&& result = Func3(10);
	result += 10;
	std::cout << result << std::endl;

	return 0;
}

void Func1()
{
	int a(3), b(4), c;
	c = a + b;
	// 이때 a + b 의 결과가 임시객체임
	// 이러한 임시객체를 참조하는게 r-value 참조
}

void Func2()
{
	int a(5);
	int&& rData = a + 5; // r-value 참조 : 임시객체의 참조
	int b = 3 + 4 + 5; // 임시객체가 3+4, 7+5 두번 생성될 것임
}

int Func3(int param)
{
	int result = param * 2;
	return result;
}