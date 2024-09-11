#include <iostream>

int add(int a, int b, int c);
int add(int a, int b);
double add(double a, double b);

void Func1();

int main()
{
	Func1();

	return 0;
}

int add(int a, int b, int c)
{
	std::cout << "add(int, int, int): ";
	return a + b + c;
}

int add(int a, int b)
{
	std::cout << "add(int, int): ";
	return a + b;
}

double add(double a, double b)
{
	std::cout << "add(double, double, double): ";
	return a + b;
}

void Func1()
{
	std::cout << add(3, 4) << std::endl;
	std::cout << add(3, 4, 5) << std::endl;
	std::cout << add(3.3, 4.4) << std::endl;
}