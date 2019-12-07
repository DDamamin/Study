#ifndef __C_QUEUE_H
#define __C_QUEUE_H

#define TRUE 1
#define FALSE 0
#define QUE_LEN 8

typedef char Data;

typedef struct _cQueue
{
	int front;
	int rear;
	Data queArr[QUE_LEN];
}CQueue;

typedef CQueue Queue;


void QueueInit(Queue* pq);
/*ť�� �ʱ�ȭ
���� �� ���� ���� ȣ�� �Ǿ�� ��*/

int isFull(Queue* pq);
/*ť�� ���� ���ִ� ��� TRUE, �� ���� ���� ��� FALSE ��ȯ*/

int isEmpty(Queue* pq);
/*ť�� �� ��� TRUE, �� ������ FALSE ��ȯ*/

void EnQueue(Queue* pq, Data data);
/*ť ������ ����, �Ű����� data�� ���޵� �� ����*/

Data DeQueue(Queue* pq);
/*��������� �ռ� ������ ����, ������ ������ ��ȯ, �����Ͱ� �ϳ� �̻� ������ ����(QIsEmpty�Լ� ������ �ʿ伺)*/


#endif