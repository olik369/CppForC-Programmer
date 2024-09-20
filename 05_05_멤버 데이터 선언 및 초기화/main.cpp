#include <iostream>

/*
* 
*/

using namespace std;

class Test
{
public:
	//Test()
	//{
	//	data = 10;
	//}

	Test() : data(10) {}	// 생성자 초기화 리스트

	int data;

	void printData()
	{
		cout << data << endl;
	}
};

//반드시 생성자 초기화 리스트를 써서 초기화 해야하는 경우
class Test2
{
private:
	int& data; // 멤버가 참조형인 경우 생성과 동시에 초기화 해줘야 함
public:
	Test2(int data) : data(data) {}

	int GetData() { return data; }
};

int main()
{
	
	return 0;
}