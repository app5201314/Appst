/*
时间：2021/1/8 21:02
目标：将用户输入的华氏温度转换成为摄氏温度和开氏温度，并输出这三个温度
分析：利用const变量来代替某些表达式
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	float cdegree, fdegree, kdegree;
	const float OP1 = 5.0 / 9.0;
	const float OP2 = 32.0;
	const float OP3 = 273.16;

	printf("Please enter a degree Fahrenheit(enter 'q' to quit): \n");
	while (scanf("%f", &fdegree))
	{
		cdegree = OP1 * (fdegree - OP2);
		kdegree = cdegree + OP3;
		printf("%.2f degree Fahrenheit = %.2f Centidegree, %.2f K\n", fdegree, cdegree, kdegree);
		printf("Please enter a degree Fahrenheit(enter 'q' to quit): \n");
	}
	printf("Thanks,bye.");
	return 0;
}