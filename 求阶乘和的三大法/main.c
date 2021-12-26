//时间：2021.12.16 编译软件codeblock
//题目：求1+2!+3!+...+20!的和。
//总共有三种方法求阶乘,以下为循环和递归的方法，静态变量法在最下方呈现

#include <stdio.h>
long long JT(int );//静态变量
//long long XH(int );//循环
//long long DG(int );//递归

int main()
{
    long long r = 0,n;
    int i;
    for(i=1; i<=20; i++)
    {
        n = JT(i);//换方法时更改这里的函数名即可
        r += n;
    }
    printf("结果为%lld",r);
    return 0;
}
//循环法求阶乘
/*long long XH(int i)
{
    int j;
    long long  r = 1;
    for(j=1; j<=i; j++)
    {
        r *= j;
    }
    return r;
}

long long XH(int i)
{
    int j;
    long long  r = 1;
    for(j=i; j>0; j--)
    {
        r *= j;
    }
    return r;
}
}*/

//递归法求阶乘
/*long long DG(int n)
{
    if(n==1||n==0)//n为1和0的阶乘为1
    {
        return 1;
    }
    else
    {
        return n*DG(n-1);//如果n不为1，那么就求n-1的阶乘，直到n=1
    }
}*/

//静态变量法求阶乘的和
long long JT(int i)
{
    static long long n = 1;
    n *= i;
    return n;
}

/*
--------------------------------------
输出结果为2561327494111820313

*/

