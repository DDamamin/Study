#include <stdio.h>
#include <stddef.h> // �����ڵ� ó���� ���� �������
#include <locale.h> // �����ڵ� ���� ������ ���� �������

#include "queue.h"
#include "screen.h"


int input(wchar_t* in) { //����ڷκ��� �Է¹޴� �Լ�
	//0�� ���Ͻ� �߸��� �Է�
	//1�� ���Ͻ� �������� �Է�
	//2�� ���Ͻ� pop
	//-1�� ���Ͻ� ����


	if (!wscanf_s(L"%c", in, sizeof(wchar_t))) (*in) = (unsigned short)0; // �Է��� �ް� �Է��� �����ϴ� ���� üũ
	while (getchar() != '\n')*in = 0; //�Է��� �ܿ� ���� ���� �� �� ���� �Է� üũ
	
	if ((*in) <= 32) //�� ���� �Է��Ͻ� �̸� �˷��ְ� �ٽ� �Է�
		return 0;
	else if (*in == L'0') return 2; // 0�� �Է���
	else if (*in == L'9') return -1; //9�� �Է���
	else return 1;	//push�ؾ��� ���� �Է���
}


int main() {
	wchar_t in;	//�Է��� ������ ����
	wchar_t temp; // �߰� ����� (pop�� �ϰ� ���� ������)�� �ӽ÷� ������ �ӽ� ����
	wchar_t stateText[100]; //���¸� ������ ���ڿ�

	Queue que;  //ť

	setlocale(LC_ALL, ""); // �����ڵ� ���� ����
	InitQueue(&que); //ť�� �ʱ�ȭ
	
	SetQueue(&que);


	while (1) {
		PrintScreen();
		switch (input(&in)) {
		case 0:
			SetComment(L"�Է� ����", L"�� ���� �Է��Դϴ�.");
			SetState(NULL, NULL);
			break;
		case 1:
			if (!Enqueue(&que, in)) {
				SetState(L"ť ����", L"ť�� ����á���ϴ�.");
				break;
			}
			swprintf(stateText, 100, L"�Է��� ���� : %c", in);
			SetState(L"ť ����", stateText);
			break;
		case 2:
			temp = Dequeque(&que);
			if (temp == 0)
				SetState(L"ť ����", L"ť�� ����ֽ��ϴ�.");
			else {
				swprintf(stateText, 100, L"����(pop)�� ���� : %c", temp);
				SetState(L"ť ����", stateText);
			}
			break;
		case -1:
			return 0;
		}
	}

	return 0;
}