/*
ʱ�䣺2021/12/24 9:30
Ŀ�꣺��10������������
������ð������
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define P 10

void inPut(int*);
void sort(int*);
void outPut(int*);

int main(void)
{
	int arr[P];
	int* p = arr;
	printf("������ʮ������\n");
	inPut(p);
	sort(p);
	printf("���������£� \n");
	outPut(p);
	return 0;
}

void inPut(int* p)
{
	int i, j;
	for (i = 0; i < P; i++)
	{
		scanf("%d", &p[i]);
	}
}

void sort(int* p)
{
	int i, j, temp;
	for (i = 1; i <= P - 1; i++)//����n�����ݣ���Ҫ��n-1�����ֵ
	{
		for (j = 0; j < P - i; j++)//ÿ����Ҫ�Ƚ�n-1�����ݣ������n��ָ���뱾�ֱȽϵ�
		{                          //P-i����������Ǹ��ִ�����Ҫ�ȽϵĴ���
			if (p[j] > p[j + 1])
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

void outPut(int* p)
{
	int i;
	for (i = 0; i < P; i++)
	{
		printf("%d\n", p[i]);
	}
}
/*
-----------------------------------
�ܽ᣺ð������
*/