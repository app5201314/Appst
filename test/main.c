/*
时间：
目标：求1~20阶乘的和
分析：
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

extern int Add(int,int);

int  main()
{
    int a = 10, b = 20,c;
    c =Add(a, b);
    printf("%d", sizeof(int*));
    return 0;
}
