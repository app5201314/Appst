//ʱ�䣺2021.12.16 �������codeblock
//��Ŀ����1+2!+3!+...+20!�ĺ͡�
//�ܹ������ַ�����׳�,����Ϊѭ���͵ݹ�ķ�������̬�����������·�����

#include <stdio.h>
long long JT(int );//��̬����
//long long XH(int );//ѭ��
//long long DG(int );//�ݹ�

int main()
{
    long long r = 0,n;
    int i;
    for(i=1; i<=20; i++)
    {
        n = JT(i);//������ʱ��������ĺ���������
        r += n;
    }
    printf("���Ϊ%lld",r);
    return 0;
}
//ѭ������׳�
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

//�ݹ鷨��׳�
/*long long DG(int n)
{
    if(n==1||n==0)//nΪ1��0�Ľ׳�Ϊ1
    {
        return 1;
    }
    else
    {
        return n*DG(n-1);//���n��Ϊ1����ô����n-1�Ľ׳ˣ�ֱ��n=1
    }
}*/

//��̬��������׳˵ĺ�
long long JT(int i)
{
    static long long n = 1;
    n *= i;
    return n;
}

/*
--------------------------------------
������Ϊ2561327494111820313

*/

