/*
时间：2021/1/9 21:30
目标：编写程序打印一个字母金字塔图案
分析：四层循环，分别控制行数、空格数、升序打印字母和降序打印字母
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ROWS 6

int main(void)
{
	int i, j, k, l, num;
	char letter;

	printf("Please enter a capital letter: ");
	scanf("%c", &letter);
	num = letter - 'A';
	for (i = 0; i < num + 1; i++)//控制行数
	{
		for (j = 0; j < num - i; j++)//打印每一行的空格数
			printf(" ");
		for (k = 0; k < i + 1; k++)//按照升序打印字母
			printf("%c", 'A' + k);
		for (l = i; l > 0; l--)//按照降序打印字母
			printf("%c", 'A' + l - 1);
		printf("\n");
	}
	printf("This is %c letter pyramid!", letter);
	return 0;
}

//总结：
//1. 本题主要考察的是循环的嵌套使用
//2. 循环嵌套最关键的就是建立外层循环与内层循环的联系
//3. 学会找规律和试数