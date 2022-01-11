/*
时间：2021/1/8 11:04
目标：将厘米转化为英尺和英寸
分析：运用符号常量表示转换系数
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