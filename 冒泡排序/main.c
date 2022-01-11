/*
时间：2021/12/24 9:30
目标：对10个数进行排序。
分析：冒泡排序法
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
	printf("请输入十个数：\n");
	inPut(p);
	sort(p);
	printf("排序结果如下： \n");
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
	for (i = 1; i <= P - 1; i++)//排序n个数据，需要找n-1个最大值
	{
		for (j = 0; j < P - i; j++)//每次需要比较n-1个数据，这里的n是指参与本轮比较的
		{                          //P-i整体的意义是该轮次所需要比较的次数
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
总结：冒泡排序法
*/