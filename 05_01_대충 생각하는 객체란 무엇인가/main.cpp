#include <iostream>

/*
* OOPȯ�濡�� ����Ʈ����(�ҽ��ڵ�)�� �����ϴ� ���� ���
* ���� �� �׿� ������ �޼��尡 �𿩼� �̷��� �ϳ��� ����ü
* C++������ Ŭ����(Class)�� ���
* Ŭ������ C����� ����ü�� �����ϸ� ������ �Լ��� ����� ���� �ϳ��� Ʋ
*/

using namespace std;

//C ��Ÿ�� (�ڷ�� �Լ��� �������� �����, �׷��� C������ ���� ����� ����)
typedef struct USERDATA
{
	int age;
	char name[32];
} USERDATA;

void printUser(USERDATA* pUser)
{
	printf("%d, %s\n", pUser->age, pUser->name);
}

//C++ ��Ÿ��
class USERDATA_CLASS
{
public:
	int age;
	char name[32];

	void printUser()
	{
		printf("%d, %s\n", age, name);
	}
};

int main()
{
	USERDATA user = { 10, "Hoon" };
	printf("%d, %s\n", user.age, user.name);

	USERDATA_CLASS user_class = { 10, "Hoon" };
	user_class.printUser();
	return 0;
}