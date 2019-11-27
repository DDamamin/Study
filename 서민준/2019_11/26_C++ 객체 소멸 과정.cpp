// Visual Studio 2019���� �ۼ��� �ڵ��Դϴ�.

#include <iostream>

class Simple
{
private:
	char str[10];

public:
	Simple(const char* s)
	{
		strcpy(str, s);
	}

	~Simple()
	{
		std::cout << "called destructor!" << std::endl;
	}
};

int main()
{
	Simple* pSim = new Simple("Simple"); // stack�� �Ҵ� �� ���� Simple* �޸� ��!

	delete pSim; // �ݵ�� delete�� ����ؾ� �Ѵ�!
	
	return 1;
}