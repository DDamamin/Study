#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK 10

typedef char element;
typedef struct stack
{
	int topindex;
	element data[MAX_STACK];
}Stack;

void Init(Stack* s)
{
	s->topindex = -1;
}

int empty(Stack* s)
{
	return (s->topindex == -1);
}

int full(Stack* s)
{
	return (s->topindex == (MAX_STACK)-1);
}

element push(Stack* s, element d)
{
	if (full(s))
	{
		printf("���� ��ȭ \n");
		exit(0);
	}

	else
		return s->data[++(s->topindex)] = d;
}

element pop(Stack* s)
{
	if (empty(s))
	{
		printf("���� ���� \n");
		exit(0);
	}

	else
		return s->data[(s->topindex)--];
}

element peek(Stack* s)
{
	if (empty(s))
	{
		printf("���� ����");
		return 0;
	}

	else
		return s->data[s->topindex];
}

int check(const char* in)
{
	Stack s;
	char Lch, Rch;
	int i, n = strlen(in);
	Init(&s);

	for (i = 0; i < n; i++)
	{
		Lch = in[i];

		switch (Lch)
		{
			case '(' : 
			case '{' :
			case '[' :
				push(&s, Lch);
				break;
			case ')' :
			case '}' :
			case ']' :
				if (empty(&s)) return 0;
				else
				{
					Rch = pop(&s);
					if ((Lch == '(' && Rch != ')') || (Lch == '[' && Rch != ']') || (Lch == '{' && Rch != '}'))
					{
						return 0;
					}
					break;
				}
		}
	}
	if (!empty(&s)) return 0;
	return 1;
}

int main()
{
	char* p = "{ A[(i+1)] = 0;}";
	char* n = "{ A[(i+1)] = 0;";

	if (check(p) == 1)
		printf("%s ��ȣ �˻� �Ϸ�!\n", p);
	else
		printf("%s ��ȣ ����!\n", p);

	if (check(n) == 1)
		printf("%s ��ȣ �˻� �Ϸ�!\n", n);
	else
		printf("%s ��ȣ ����!\n", n);
	return 0;
}
