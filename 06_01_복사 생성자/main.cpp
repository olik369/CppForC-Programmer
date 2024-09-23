#include <iostream>

/*
* - 복사 생성자
* 클래스명(const 클래스명 &rhs)
* 객체의 사본을 생성할 때 자동으로 호출되는 생성자 함수
* rhs는 Right Hand Side의 약어이며 복사의 원본 인스턴스에 대한 참조
* 
* Deep Copy를 당연히 고려해야함
*/

using namespace std;

class MyData
{
public:
	MyData()
	{
		cout << "MyData()" << endl;
	}

	MyData(const MyData& rhs) : nData(rhs.nData)
	{
		cout << "MyData(const MyData&)" << endl;
	}

	void setData(int a)
	{
		nData = a;
	}

	int getData() const
	{
		return nData;
	}
private:
	int nData = 0;
};

void Practice1();

int main()
{
	Practice1();
	return 0;
}

void Practice1()
{
	MyData a;
	a.setData(10);

	MyData b(a);	// 복사 생성자 호출
	cout << b.getData() << endl;
}