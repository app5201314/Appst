/*
ʱ�䣺2021/1/15 10:14
Ŀ�꣺����˰����
������ʹ��if else�Ķ�����׺�switch�ṹ�����
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "main.h"

int main(void)
{
	double pay;

	do
	{
		pay = menu();
		if (0 == pay)//�û����롮5�����˳�
			break;
		count(pay);
	} while (1);
	printf("Done!");

	return 0;
}