#include <iostream>

/*
* �������� �ߺ��� ����ϱ� ���� ����
* �ĺ���::������
* 
* C����� ���������� C++������ ���� Global namespace�� ����
* 
* namespace�� ��ø�� ������
*/

using namespace std;

int data = 50;

void testFunc()
{
	cout << "::TestFunc()" << endl;
}

namespace Test
{
	int data = 100;

	void testFunc()
	{
		cout << "Test::TestFunc()" << endl;
	}

	namespace Test1
	{
		int data = 90;
	}
}

int main()
{
	::testFunc();
	Test::testFunc();
	cout << "Test::data : " << Test::data << endl;
	cout << "::data : " << ::data << endl;
	cout << "Test::Test1::data : " << Test::Test1::data << endl;
	return 0;
}