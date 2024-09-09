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

	//Func3���� ������ result ������ ������� �ʰ� main�Լ��� ������ �Ҹ���
	int&& result = Func3(10);
	result += 10;
	std::cout << result << std::endl;

	return 0;
}

void Func1()
{
	int a(3), b(4), c;
	c = a + b;
	// �̶� a + b �� ����� �ӽð�ü��
	// �̷��� �ӽð�ü�� �����ϴ°� r-value ����
}

void Func2()
{
	int a(5);
	int&& rData = a + 5; // r-value ���� : �ӽð�ü�� ����
	int b = 3 + 4 + 5; // �ӽð�ü�� 3+4, 7+5 �ι� ������ ����
}

int Func3(int param)
{
	int result = param * 2;
	return result;
}