/*
ʱ�䣺2021/1/9 21:30
Ŀ�꣺��д�����ӡһ����ĸ������ͼ��
�������Ĳ�ѭ�����ֱ�����������ո����������ӡ��ĸ�ͽ����ӡ��ĸ
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
	for (i = 0; i < num + 1; i++)//��������
	{
		for (j = 0; j < num - i; j++)//��ӡÿһ�еĿո���
			printf(" ");
		for (k = 0; k < i + 1; k++)//���������ӡ��ĸ
			printf("%c", 'A' + k);
		for (l = i; l > 0; l--)//���ս����ӡ��ĸ
			printf("%c", 'A' + l - 1);
		printf("\n");
	}
	printf("This is %c letter pyramid!", letter);
	return 0;
}

//�ܽ᣺
//1. ������Ҫ�������ѭ����Ƕ��ʹ��
//2. ѭ��Ƕ����ؼ��ľ��ǽ������ѭ�����ڲ�ѭ������ϵ
//3. ѧ���ҹ��ɺ�����