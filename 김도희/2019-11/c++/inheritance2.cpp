#include <iostream>
using namespace std;

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* name1, int age1)
	{
		name = new char[strlen(name1) + 1];
		strcpy(name, name1);
		age = age1;
	}

	void showMyFriendInfo()
	{
		cout << "�̸� : " << name << endl;
		cout << "��ȭ��ȣ : " << age << endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;

public:
	MyFriendDetailInfo(const char* name1, int age1,const char* add, const char* phon)
		:MyFriendInfo(name1, age1)
	{
		addr = new char[strlen(add) + 1];
		strcpy(addr, add);
		phone = new char[strlen(phon) + 1];
		strcpy(phone, phon);
	}

	void showMyFriendDetailInfo()
	{
		showMyFriendInfo();
		cout << "�ּ� : " << addr << endl;
		cout << "��ȭ��ȣ : " << phone << endl;
	}
};

int main()
{
	MyFriendDetailInfo fren1("�����", 17, "����", "010-111-1111");
	MyFriendDetailInfo fren2("ȫ�ڿ�", 19, "�λ�", "010-222-2222");
	fren1.showMyFriendDetailInfo();
	fren2.showMyFriendDetailInfo();
}