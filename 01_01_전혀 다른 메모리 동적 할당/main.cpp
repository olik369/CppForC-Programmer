#include <iostream>

void Func1();
void Func2();

int main()
{
	//Func1();
	Func2();

	return 0;
}

void Func1()
{
	int* pData = new int;
	int* pNewData = new int(10);

	*pData = 5;

	std::cout << *pData << std::endl;
	std::cout << *pNewData << std::endl;

	delete pData;
	delete pNewData;
}

void Func2()
{
	int* pArr = new int[5];
	for (int i = 0; i < 5; ++i)
		pArr[i] = (i + 1) * 10;

	for (int i = 0; i < 5; ++i)
		std::cout << pArr[i] << std::endl;

	delete[] pArr;
}