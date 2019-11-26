#include <iostream>
using namespace std;

class Employee
{
protected:
	char name[20];
	int id;
public:
	Employee(const char* n, int id)
	{
		strcpy(name, n);
		this->id = id;
	}
	void print()
	{
		cout << "id=" << id << " " << "name=" << name << endl;
	}
	~Employee()
	{ }
};

class Temporary :public Employee
{
private:
	int hours;
	int payPerHour;
public:
	Temporary(const char* n, int i, int h, int p)
		:Employee(n, i)
	{
		hours = h;
		payPerHour = p;
	}
	void print();
	~Temporary()
	{ }
};

void Temporary::print()
{
	Employee::print();
	cout << "hours=" << hours << " " << "payPerHour=" << 
	payPerHour << endl;
}

int main()
{
	Employee* psmith = new Employee("smith", 30);
	// ���ÿ� �Ҵ�Ȱ��� new Employee("smith", 30)�� �ƴ϶� Employee* psmith��
	psmith->print();
	Temporary tom("Tom", 2, 40, 8000);
	tom.print();
	delete psmith; // �׷��Ƿ� �ݵ�� main���� delete �������
}
