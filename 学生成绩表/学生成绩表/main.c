//ʱ��2021/12/27
#include <stdio.h>
#include <malloc.h>
#define S 10//ѧ������
#define K 3//��Ŀ����

struct std
{
    int no;//ѧ��
    float sc[K];//K�ſγ̵ĳɼ�
    float total;//�ܷ�
};

void inPut(struct std *);
void sort(struct std *);
void outPut(struct std *);

int main()
{
    struct std * pst;
    pst = (struct std *)malloc(S * sizeof(struct std));//����һ����̬�ڴ�������������Ϊ��struct std���Ľṹ������
    printf("������ѧ����ѧ�ź����ſγ̵ĳɼ��� \n");
    inPut(pst);//����ѧ�ųɼ�������ѧ���ܷ�
    sort(pst);//���ֽܷ����ѧ������
    outPut(pst);//���ѧ���ĳɼ���
    return 0;
}

void inPut(struct std * pst)
{
    int i,j;
    for(i=0; i<S; i++)
    {
        scanf("%d",&pst[i].no);
        pst[i].total = 0;//��ʼ��
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
    printf("ѧ�ţ�         ���ģ�         ��ѧ��         Ӣ�         �ܷ֣�         ���Σ�\n");
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
