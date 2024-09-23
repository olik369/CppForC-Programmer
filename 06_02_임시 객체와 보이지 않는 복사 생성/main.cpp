#include <iostream>

/*
* - 이름이 없는 임시 객체와 복사 생성
* 클래스가 함수의 반환 자료형이 될 경우 (이름이 없는)임시 객체를 생성 [비효율의 원인]
* -> 임시 객체를 생성하지 않는 코드로 짜는게 좋음
* 클래스가 매개변수나 반환 자료형인 경우 가급적 참조형으로 선언
* 참조형 선언 시 가급적 상수형 참조로 선언
* -> 즉, 클래스가 매개변수나 반환 자료형인 경우 "상수형 참조"를 써라!
*/

using namespace std;

class TestData
{
public:
	// 매개변수가 하나뿐인 생성자 => 변환 생성자
	TestData(const int data) : nData(data)
	{
		cout << "TestData(int)" << endl;
	}

	TestData(const TestData& rhs) : nData(rhs.nData)
	{
		cout << "TestData(const TestData&)" << endl;
	}

	~TestData()
	{
		cout << "~TestData( " << nData << " )" << endl;
	}

	int getData() const
	{
		return nData;
	}

	void setData(const int data)
	{
		this->nData = data;
	}
private:
	int nData = 0;
};

TestData testFunc(TestData rhs);

int main()
{
	// testFunc(10).setData(100) 의 임시객체는 이름이 없어 바로 소멸됨
	testFunc(10).setData(100);
	cout << "End of main()" << endl;
	return 0;
}

TestData testFunc(TestData rhs)
{
	cout << "testFunc()" << endl;
	rhs.setData(20);
	return rhs;
}