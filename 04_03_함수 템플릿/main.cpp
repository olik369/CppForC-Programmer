#include <iostream>

template <typename T>
T add(T a, T b);

void Func1();

int main()
{
	Func1();
	return 0;
}

template <typename T>
T add(T a, T b)
{
	return a + b;
}

void Func1()
{
	std::cout << add(3, 4) << std::endl;
	std::cout << add(3.3, 4.4) << std::endl;
}