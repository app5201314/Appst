/*
ʱ�䣺2021/1/10 16:45
Ŀ�꣺��д�����ӡ�����������е�ֵ
�������ؼ��Ƿ���������ȷ��
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define OP1 1.0

int main(void)
{
	double sum1 = 0, sum2 = 0;
	double temp;
	int index, num;
	int sign = 1;

	printf("Please enter a number: \n");
	scanf("%d", &num);
	while (num > 0)
	{
		for (index = 1; index <= num; index++, sign *= -1)
		{
			temp = OP1 / (index * OP1);
			sum1 += temp;
			sum2 += sign * temp;
		}
		printf("The sum1 is %f \n", sum1);
		printf("The sum2 is %f \n", sum2);
		printf("Please enter next number: \n");
		scanf("%d", &num);
	}
	printf("Done!");
	return 0;
}