#include <stdio.h>
#include <stdlib.h>

#define MaX_QUEUE 8

typedef char element;
typedef struct {
	int front;
	int rear;
	element data[MaX_QUEUE];
}Queue;

void Init(Queue* q)
{
	q->rear = q->front = 0;
}

int empty(Queue* q)
{
	return	(q->front == q->rear);
}

int full(Queue* q)
{
	return ((q->rear + 1) % MaX_QUEUE) == q->front;
}

void print(Queue* q)
{
	printf("\t\t���� front : %d  ���� rear : %d \n\n\n", q->front, q->rear);
	int i = q->front;

	if (!empty(q)) {
		do {
			i = (i + 1) % MaX_QUEUE;

			printf("  [ %c ] ", q->data[i]);

			if (i == q->rear)
				break;
		} while (i != q->front);
	}
	printf("\n");
}

void enqueue(Queue* q, char d)
{
	system("CLS");
	if (full(q))
	{
		printf("\n\t\t\t\a   ��ȭ����\n\n");
		return;
	}

	printf("\n\t\t\tť ���� ����\n\n");
	q->rear = (q->rear + 1) % MaX_QUEUE;
	q->data[q->rear] = d;
}

element dequeue(Queue* q)
{

	system("CLS");
	if (empty(q))
	{
		printf("\n\t\t\t\a   ���� ����\n\n");
		return;
	}

	printf("\n\t\t\tť ���� ����\n\n");
	q->front = (q->front + 1) % MaX_QUEUE;
	return q->data[q->front];
}

int main()
{
	Queue q;
	element data = 0;

	Init(&q);

	printf("\n\n\tó�� ���ÿ� ���� ���ڸ� �Է��� �ּ���!\n");

	do{
		printf("\n\n\t\t\t���� �Է� : ");
		gets(&data);
	
		if (data == '0')
		{
			dequeue(&q);
		}

		else if (data == '9')
		{
			break;
		}

		else
		enqueue(&q, data);
		
		print(&q);

	} while (1);

	system("CLS");
	printf("���α׷� ����");
	return 0;
}