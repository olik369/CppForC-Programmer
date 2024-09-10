#include <iostream>

int testFunc(int a, int b = 10); // b는 디폴트 파라미터

int main()
{
	int nData = testFunc(5);
	std::cout << nData << std::endl;
	return 0;
}

int testFunc(int a, int b)
{
	return a + b;
}