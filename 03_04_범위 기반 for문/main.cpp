#include <iostream>

void Func1();

int main()
{
	Func1();
	return 0;
}

void Func1()
{
	int list[] = { 10,20,30,40,50 };

	for (int i = 0; i < 5; ++i)
		std::cout << list[i] << ' ';
	std::cout << std::endl;

	for (const auto element : list)
		std::cout << element << ' ';
	std::cout << std::endl;

	for (const auto& element : list)
		std::cout << element << ' ';
	std::cout << std::endl;
}