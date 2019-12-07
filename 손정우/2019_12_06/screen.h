#ifndef SCREEN_H
#define SCREEN_H

//ȭ�� ����� ���� ���
//ȭ�� ��¿� �ʿ��� ���� �Լ���� ���� ���� ���� ���� �Ǿ��ִ�.
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void(*paragraph[5])();
int paragraphNum;
const wchar_t* stateTitle, *stateContext;
const wchar_t* commentTtile, * commentContext;
const Queue* queForPrint;


void PrintScreen();
void RenderScreen();
void AddContext(void(*func)());
void SetState(const wchar_t* title, const wchar_t* context);
void SetComment(const wchar_t* title, const wchar_t* context);
void SetQueue(const Queue* que);

void PrintState();
void PrintComment();
void PrintExp();
void PrintQueue();
void PrintInput();

#endif // !SCREEN_H
