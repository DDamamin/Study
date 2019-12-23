#ifndef QUEUE_H
#define QUEUE_H

#include <stddef.h>

#define True 1
#define False 0

typedef struct _queue {
	wchar_t data[8];
	int rear;
	int front;
}Queue;

void InitQueue(Queue* que);//ť�� �ʱ�ȭ�Ѵ�.

int NextIdx(int idx);//�Ű������� ���� �ε����� ���� �ε����� ����
int isFull(Queue* que); //ť�� ����á���� Ȯ���ϴ� �Լ� True�� ������, False�� �������� ����

int isEmpty(Queue* que);//ť�� ������� �˻��ϴ� �Լ�, Ture�� �������, False�� ������� ����
int Enqueue(Queue* que, wchar_t data);//ť�� �����͸� ����, ���ϰ��� False(0)�Ͻ� ť�� ������, True�� ���� �۵�
wchar_t Dequeque(Queue* que);//ť�� ������ ����, ���ϰ��� False(0)�Ͻ� ť�� �������, Flase �̿��� ���� �� �����۵�

wchar_t GetData(const Queue* que, int idx); //�Ű������� ���� �ε����� ��ġ�� �����͸� �����Ѵ�. *��¿뵵�ܿ��� ���� �� ��*



#endif // !QUEUE_H



