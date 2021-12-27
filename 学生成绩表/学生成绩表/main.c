//时间2021/12/27
#include <stdio.h>
#include <malloc.h>
#define S 10//学生总数
#define K 3//科目门数

struct std
{
    int no;//学号
    float sc[K];//K门课程的成绩
    float total;//总分
};

void inPut(struct std *);
void sort(struct std *);
void outPut(struct std *);

int main()
{
    struct std * pst;
    pst = (struct std *)malloc(S * sizeof(struct std));//定义一个动态内存分配的数据类型为“struct std”的结构体数组
    printf("请输入学生的学号和三门课程的成绩： \n");
    inPut(pst);//输入学号成绩并计算学生总分
    sort(pst);//按总分降序给学生排序
    outPut(pst);//输出学生的成绩表
    return 0;
}

void inPut(struct std * pst)
{
    int i,j;
    for(i=0; i<S; i++)
    {
        scanf("%d",&pst[i].no);
        pst[i].total = 0;//初始化
        for(j=0; j<K; j++)
        {
            scanf("%f",&pst[i].sc[j]);
            pst[i].total += pst[i].sc[j];
        }
    }
}

void sort(struct std * pst)
{
    int i,j;
    struct std temp;
    for(i=0; i<S-1; i++)
    {
        for(j=0; j<S-i-1; j++)
        {
            if(pst[j].total<pst[j+1].total)
            {
                temp = pst[j];
                pst[j] = pst[j+1];
                pst[j+1] = temp;
            }
        }
    }
}

void outPut(struct std * pst)
{
    int i,j;
    printf("学号：         语文：         数学：         英语：         总分：         名次：\n");
    for(i=0; i<S; i++)
    {
        printf("%-15d",pst[i].no);
        for(j=0; j<K; j++)
        {
            printf("%-15.2f",pst[i].sc[j]);
        }
        printf("%-15.2f",pst[i].total);
        printf("%-15d\n",i+1);
    }
}
