﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int num;
    char blood[2];
    float eyes;
    int weight;

}Privacy;

int main()
{
    int i;
    Privacy man[2];


    for (i = 0; i < 2; i++)
    {
        scanf("%d %c %f %d", &man[i].num, &man[i].blood[i], &man[i].eyes, &man[i].weight);
    }
    for (i = 0; i < 2; i++)
    {
        printf("%d %c %.1f %d", man[i].num, man[i].blood[i], man[i].eyes, man[i].weight);
        putchar('\n');
    }

    return 0;
}
