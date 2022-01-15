/*
时间：2021/1/15 10:14
目标：计算税后工资
分析：使用if else的多层镶套和switch结构来解决
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
		if (0 == pay)//用户输入‘5’，退出
			break;
		count(pay);
	} while (1);
	printf("Done!");

	return 0;
}