#include "screen.h"

//ȭ�� ����� ���� ��� screen.h�� ������ �κ�
//ȭ�� ��¿� �ʿ��� ���� �Լ����� ���� �Ǿ��ִ�.

void PrintScreen() {
	int i;

	RenderScreen();
	for (i = 0; i < paragraphNum; i++)
		paragraph[i]();

	paragraphNum = 0;
}

void RenderScreen() {
	paragraph[paragraphNum++] = PrintExp;
	paragraph[paragraphNum++] = PrintQueue;
	paragraph[paragraphNum++] = PrintInput;
}
void SetState(const char* title, const char* context) {
}
void PrintExp() {
	printf("������ ���ϴ� ���Ҹ� �Է��ϼ���.\n");
	printf("pop�� �ϰ� �ʹٸ� 0�� �Է��ϼ���.\n");
	printf("���α׷��� �����ϰ� �ʹٸ� 9�� �Է��ϼ���.\n");
}

void PrintQueue()
{
}

void PrintInput() {
	printf("�Է� : ");
}
