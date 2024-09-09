#include <iostream>

void Func1();
void Func2();
void Swap(int& a, int& b);

int main(void)
{
	Func1();
	Func2();

	return 0;
}

void Func1()
{
	int data = 10;
	int& ref = data;
	ref = 20;
	std::cout << data << std::endl;

	int* pData = &data;
	*pData = 30;
	std::cout << data << std::endl;
}

void Func2()
{
	int x = 10, y = 20;
	Swap(x, y);
	std::cout << "x : " << x << " y : " << y << std::endl;
}

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}