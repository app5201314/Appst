#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "main.h"

double menu(void)
{
	int select;
	double pay;
	char ch;

	printf("Please select your base-salary:\n");
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $%.2lf/hr                             2) $%.2lf/hr \n", SELECT_1, SELECT_2);
	printf("3) $%.2lf/hr                            4) $%.2lf/hr \n", SELECT_3, SELECT_4);
	printf("5) quit \n");
	printf("*****************************************************************\n");

	while (scanf("%d", &select) != 1)//如果用户输入了非数字，则提醒用户重新输入
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\n");
		printf("Please enter 1~5 :\n");
	}

	switch (select)
	{
	case 1:
		pay = SELECT_1;
		break;;
	case 2:
		pay = SELECT_2;
		break;
	case 3:
		pay = SELECT_3;
		break;
	case 4:
		pay = SELECT_4;
		break;
	case 5:
		pay = 0;
		break;
	default:
		pay = -1;
		break;
	}

	if (-1 == pay)//如果用户输入了无效数字，则提醒用户重新输入
	{
		printf("Error, please enter 1~5 to select:\n");
		menu();
	}

	return pay;
}

void count(double pay)
{
	double gross, net_income, taxs, hours;

	printf("Please enter your work hours: \n");
	while (scanf("%lf", &hours) != 1)
	{
		scanf("%*s");//跳过缓冲区中的字符串
		printf("Error,'hour' is number!,try again.\n");
	}
	while (hours <= 0)
	{
		printf("Error,please enter '>0' hours:\n");
		scanf("%lf", &hours);
	}

	if (hours <= OVER_H)
		gross = hours * pay;
	else
		gross = OVER_H * pay + (hours - OVER_H) * EXTRA_H;

	if (gross <= BREAK_1)
		taxs = RATE_1 * gross;
	else if (gross > BREAK_1 && gross <= BREAK_2)
		taxs = RATE_1 * BREAK_1 + (gross - BREAK_1) * RATE_2;
	else
		taxs = RATE_1 * BREAK_1 + RATE_2 * (BREAK_2 - BREAK_1)
		+ (gross - BREAK_2) * RATE_3;

	net_income = gross - taxs;

	printf("Gross = %.2lf $,taxs = %.2lf $,net-income = %.2lf $\n\n", gross,
		taxs, net_income);
}

