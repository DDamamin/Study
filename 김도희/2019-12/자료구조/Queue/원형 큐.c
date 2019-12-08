#include <stdio.h>
#include <stdlib.h>

#define MaX_QUEUE 8

typedef int element;
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
	printf("���� front : %d  ���� rear : %d \n\n", q->front, q->rear);
	int i = q->front;

	if (!empty(q)) {
		do {
			i = (i + 1) % MaX_QUEUE;
			printf("%d | ", q->data[i]);
			if (i == q->rear)
				break;
		} while (i != q->front);
	}
	printf("\n");
}

void enqueue(Queue* q, int data)
{
	if (full(q))
	{
		printf("��ȭ");
		exit(0);
	}
	q->rear = (q->rear + 1) % MaX_QUEUE;
	q->data[q->rear] = data;
}

element dequeue(Queue* q)
{
	if (empty(q))
	{
		printf("����");
		exit(0);
	}
	q->front = (q->front + 1) % MaX_QUEUE;
	return q->data[q->front];
}

element peek(Queue* q)
{
	if (empty(q))
	{
		printf("����");
		exit(0);
	}
	return q->data[(q->front + 1) % MaX_QUEUE];
}

int main()
{
	Queue q;
	int data;

	Init(&q);
	printf("==========������ �Է�==========");

	while (!full(&q))
	{
		printf("\n\n���� �Է� : ");
		scanf("%d", &data);
		enqueue(&q, data);
		print(&q);
	}
	printf("\nť ��ȭ ����\n\n");

	printf("==========������ ����=========="); 

	while (!empty(&q))
	{
		data = dequeue(&q);
		printf("\n\n���� ���� : %d\n", data);
		print(&q);
	}
	printf("\nť ���� ����\n\n");

	return 0;
}