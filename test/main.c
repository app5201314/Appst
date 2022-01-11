/*
时间：2021/1/11 21:35
目标：计算多少年后，后者的投资额会超过前者，并显示出此时两人的投资额
分析：先抽象出数学模型
	前者的模型为y1=100*(1+0.1*year)
	后者的模型为y2(n)=y2(n-1)*0.05+y2(n-1),n为年数,y2(0)=100
	y2>y1时的year是我们所求年数，此时的y1和y2分别是两人的投资额
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#define INVEST	100
#define RATE1	0.1
#define RATE2	0.05
 
int main(void)
{
	unsigned int year = 1;
	double invest1 = INVEST, invest2 = INVEST;
	
	do
	{
		invest1 = INVEST * (1 + RATE1 * year);
		invest2 = invest2 * RATE2 + invest2;
		year++;
	} while (invest1 > invest2);
	printf("Year = %d,invest1 = %.2f,invest2 = %.2f.",
		year - 1, invest1, invest2);

	return 0;
}