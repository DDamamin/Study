#ifndef SCREEN_H
#define SCREEN_H

//ȭ�� ����� ���� ���
//ȭ�� ��¿� �ʿ��� ���� �Լ���� ���� ���� ���� ���� �Ǿ��ִ�.
#include <stdio.h>

void(*paragraph[5])();
int paragraphNum;


void PrintScreen();
void RenderScreen();
void SetState(const char* title, const char* context);
void SetComment(const char* title, const char* context);

void PrintExp();
void PrintQueue();
void PrintInput();

#endif // !SCREEN_H
