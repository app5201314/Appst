/*
ʱ�䣺
Ŀ�꣺��1~20�׳˵ĺ�
������
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
