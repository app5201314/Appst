/*题目：输入某年某月某日，判断这一天是这一年的第几天？

程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天
特殊情况，闰年且输入月份大于3时需考虑多加一天。
平年365天，闰年366天

一般的,能被4整除的年份是闰年,不能被4整除的年份是平年.

如:1988年2008年是闰年;2005年2006年2007年是平年.

但是如果是世纪年(也就是整百年),就只有能被400整除才是闰年,否则就是平年.

如:2000年就是闰年,1900年就是平年

平年和闰年的区别是：闰年的2月有29天,平年的2月只有28天.*/
#include <stdio.h>
#include <stdlib.h>

int isLY(int);

int main()
{
    int Y,M,D,D2,result;
    scanf("%d%d%d",&Y,&M,&D);
    Y=isLY(Y);//判断平闰年
    if(Y)//判断2月的天数
    {
        D2=28;
    }
    else
    {
        D2=29;
    }
    switch(M)
    {
    case 1:
        break;
    case 2:
        D+=31;
        break;
    case 3:
        D+=(31+D2);
        break;
    case 4:
        D+=(2*31+D2);
        break;
    case 5:
        D+=(2*31+D2+30);
        break;
    case 6:
        D+=(3*31+D2+30);
        break;
    case 7:
        D+=(3*31+D2+2*30);
        break;
    case 8:
        D+=(4*31+D2+2*30);
        break;
    case 9:
        D+=(5*31+D2+2*30);
        break;
    case 10:
        D+=(5*31+D2+3*30);
        break;
    case 11:
        D+=(6*31+D2+3*30);
        break;
    case 12:
        D+=(6*31+D2+4*30);
        break;
    }
    printf("%d",D);
    return 0;
}

int isLY(int Y)//LY为leap year闰年
{
    if(Y%100)//先判断是否为世纪年，这是非世纪年的情况
    {
        if(Y%4)//平年
        {
            return 1;
        }
        else//闰年
        {
            return 0;
        }
    }
    else//世纪年
    {
        if(Y%400)//平年
        {
            return 1;
        }
        else//闰年
        {
            return 0;
        }
    }
}
