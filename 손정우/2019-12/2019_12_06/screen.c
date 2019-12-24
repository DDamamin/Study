#include "screen.h"

//ȭ�� ����� ���� ��� screen.h�� ������ �κ�
//ȭ�� ��¿� �ʿ��� ���� �Լ����� ���� �Ǿ��ִ�.

void PrintScreen() {
	int i;
	system("cls");
	RenderScreen();
	for (i = 0; i < paragraphNum; i++)
		paragraph[i]();

	paragraphNum = 0;
}

void RenderScreen() {
	AddContext(PrintExp);
	AddContext(PrintQueue);
	AddContext(PrintInput);
}
void AddContext(void(*func)()) {
	paragraph[paragraphNum++] = func;
}
void SetState(const wchar_t* title, const wchar_t* context) {
	if (title == NULL && context == NULL) {
		if (stateTitle && stateContext)
			AddContext(PrintState);
		return;
	}
	stateTitle = title;
	stateContext = context;
	AddContext(PrintState);
}

void SetComment(const wchar_t* title, const wchar_t* context) {
	commentTtile = title;
	commentContext = context;
	AddContext(PrintComment);
}

void SetQueue(const Queue* que) {
	queForPrint = que;
}

void PrintState() {
	wprintf(L"[%s]%s\n\n", stateTitle, stateContext);
}

void PrintComment() {
	wprintf(L"[%s]%s\n\n", commentTtile, commentContext);
}


void PrintExp() {
	printf("������ ���ϴ� ���Ҹ� �Է��ϼ���.\n");
	printf("pop�� �ϰ� �ʹٸ� 0�� �Է��ϼ���.\n");
	printf("���α׷��� �����ϰ� �ʹٸ� 9�� �Է��ϼ���.\n\n");
}



void PrintQueue() {
	printf("    ���� ť    \n");
	printf("rear = %d / front = %d\n", queForPrint->rear, queForPrint->front);
	printf(",-----, ,-----, ,-----,\n");
	wprintf(L"   %c      %c       %c\n",GetData(queForPrint, 0), GetData(queForPrint, 1), GetData(queForPrint, 2));
	printf("`--0--` `--1--` `--2--`\n");
	printf(",-----,         ,-----,\n");
	wprintf(L"   %c               %c\n", GetData(queForPrint, 7), GetData(queForPrint, 3));
	printf("`--7--`         `--3--`\n");
	printf(",-----, ,-----, ,-----,\n");
	wprintf(L"   %c      %c       %c\n", GetData(queForPrint, 6), GetData(queForPrint, 5), GetData(queForPrint, 4));
	printf("`--6--` `--5--` `--4--`\n");

}

void PrintInput() {
	printf("�Է� : ");
}
