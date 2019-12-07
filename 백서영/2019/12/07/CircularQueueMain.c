#include <stdio.h>
#include "CircularQueue.h"
#include <Windows.h>

void Screen(Queue* pq, const char *mes, char chk);
void Peek(Queue* pq);

int main() {
	Queue q;
	QueueInit(&q);
	char input;
	Screen(&q, "", NULL);
	while (1)
	{
		printf("\n\n�Է� ��: ");
		scanf("%c", &input);
		system("cls");
		while (getchar() != '\n');

		if (input == '0')
			DeQueue(&q);
		else if (input == '9')
			return 0;
		else
			EnQueue(&q, input);
	}
	
	
	return 0;
}

void Screen(Queue* pq, const char* mes, char chk)
{
	printf("%s %c", mes, chk);
	printf("\n\n������ ���ϴ� ���Ҹ� �Է��ϼ���.\n0�� �Է��ϸ� ���Ҹ� pop�մϴ�.\n���α׷��� �����Ϸ��� 9�� ��������\n\n");

	Peek(pq);
}

void Peek(Queue* pq)
{
	printf("\t�� �� ť\n");
	printf("  rear = %2d \ front = %2d\n", pq->rear, pq->front);
	printf("   ,---, ,---, ,---,\n");
	printf("   | %c | | %c | | %c | \n", pq->queArr[0], pq->queArr[1], pq->queArr[2]);
	printf("   '-0-' '-1-' '-2-'\n");
	printf("   ,---,       ,---,\n");
	printf("   | %c |       | %c | \n", pq->queArr[7], pq->queArr[3]);
	printf("   '-7-'       '-3-'\n");
	printf("   ,---, ,---, ,---,\n");
	printf("   | %c | | %c | | %c | \n", pq->queArr[6], pq->queArr[5], pq->queArr[4]);
	printf("   '-6-' '-5-' '-4-'\n");
}