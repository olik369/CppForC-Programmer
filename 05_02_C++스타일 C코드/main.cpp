#include <iostream>
#include <stdio.h>

//C++ ��Ÿ�� C�ڵ� ���� (�ڷ�� �Լ��� �������� �����������)
typedef struct USERDATA
{
	int age;
	char name[32];
	void(*printData)(struct USERDATA* pUser);	//�Լ� �����͸� ������ ����
} USERDATA;

void printData(USERDATA* pUser)
{
	printf("%d, %s\n", pUser->age, pUser->name);
}

using namespace std;

int main()
{
	USERDATA user = { 20, "ö��", printData };
	user.printData(&user);

	//C++������ &user�� �Ű������� �ѱ�� ������ ���ֱ� ���� this�����͸� ����
	//�ڵ� �����ڴ� �ڵ� �ۼ������� �̷����� �ν��Ͻ��� �ּҸ� �˼��� ���⶧��

	return 0;
}