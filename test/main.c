/*
ʱ�䣺2021/1/11 21:35
Ŀ�꣺���������󣬺��ߵ�Ͷ�ʶ�ᳬ��ǰ�ߣ�����ʾ����ʱ���˵�Ͷ�ʶ�
�������ȳ������ѧģ��
	ǰ�ߵ�ģ��Ϊy1=100*(1+0.1*year)
	���ߵ�ģ��Ϊy2(n)=y2(n-1)*0.05+y2(n-1),nΪ����,y2(0)=100
	y2>y1ʱ��year������������������ʱ��y1��y2�ֱ������˵�Ͷ�ʶ�
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