#include <iostream>

/*
* 클래스의 생성자는 반환자료형이 존재하지 않는 함수
* 
* - 생성자 위임
*/

using namespace std;

class MyPoint
{
public:
	MyPoint(int x)
	{
		cout << "MyPoint(int)" << endl;
		if (x > 100)
			x = 100;
		this->x = x;
	}

	MyPoint(int x, int y) : MyPoint(x + y) // 생성자 위임 MyPoint(int)가 먼저 호출됨
	{
		cout << "MyPoint(int, int)" << endl;
		if (y > 200)
			y = 200;
		this->y = y;
	}

	void print()
	{
		cout << "x:" << x << '\n' << "y:" << y << endl;
	}
private:
	int x, y = 0;
};

int main()
{
	MyPoint begin(110);
	begin.print();

	MyPoint end(50, 250);
	end.print();
	return 0;
}