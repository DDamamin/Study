#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> // �����ڵ� ó���� ���� �������
#include <locale.h> // �����ڵ� ���� ������ ���� �������

#include "screen.h"


void input(wchar_t* in) { //����ڷκ��� �Է¹޴� �Լ�
	while (!wscanf(L"%c", in)) { //�� ���� �Է��Ͻ�(wsacnf�� ���ϰ��� 0) �̸� �˷��ְ� �ٽ� �Է�
		printf("�� �� �� �Է��Դϴ�.");
	}

}


int main() {
	wchar_t in;	//�Է��� ������ ����
	int i = 0;
	const char *c;
	setlocale(LC_ALL, ""); // �����ڵ� ���� ����

	c = "asfd";


	while (1) {
		printf("%d", i++);

		PrintScreen();
		system("pause");
	}

	//input(&in);

	//if (!in) {
	//	//ť ����
	//}
	//else {
	//	//ť�Է�
	//}








	return 0;
}