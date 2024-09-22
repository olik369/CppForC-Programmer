#include <iostream>

/*
* - 정적 멤버
* 소속이 클래스 멤버로 제한됐을 뿐 사실상 전역 변수나 함수와 동일
* 전역 변수를 사용하지 않을 수 있는 이유
* 일반 메서드와 달리 인스턴스 선언 없이 호출 가능
* this포인터를 사용할 수 없음
*/

using namespace std;

class Test
{
public:
	Test(int data) : nData(data) { nCount++; }
	void resetCount()
	{
		cout << "Called resetCount()" << endl;
		nCount = 0;
	}
	int getData() const { return nData; }
	static int getCount() { return nCount; }
private:
	int nData = 0;
	static int nCount;
};

int Test::nCount = 0;

int main()
{
	Test a(5), b(10);
	cout << "a:" << a.getData() << endl;
	cout << "b:" << b.getData() << endl;
	cout << a.getCount() << endl;

	b.resetCount();
	cout << "a.getCount() : " << a.getCount() << endl;
	cout << "Test::getCount() : " << Test::getCount() << endl;
	return 0;
}