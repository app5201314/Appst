/*
ʱ�䣺2021/1/8 11:04
Ŀ�꣺������ת��ΪӢ�ߺ�Ӣ��
���������÷��ų�����ʾת��ϵ��
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define CM_PER_FT 30.48//ft = 30.08 cm
#define CM_PER_INCH 2.54//inch = 2.54 cm
#define INCH_PER_FT 12//ft = 12 inch

int  main(void)
{
    float height, inches;
    int feet;

    printf("Please enter a height in centimeters");
    printf("(<= 0 to quit):\n");
    scanf("%f", &height);
    while (height > 0)
    {
        feet = height / CM_PER_FT;
        inches = (height / CM_PER_INCH) - (INCH_PER_FT * feet);
        printf("%.1f centimeters = %dfeet , %.1finches\n", height, feet, inches);
        printf("Please enter a height in centimeters");
        printf("(<= 0 to quit):\n");
        scanf("%f", &height);
    }
    printf("Bye");
    return 0;
}