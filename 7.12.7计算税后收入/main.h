#define OVER_H		40//加班时间的分解点
#define EXTRA_H		15//加班时间每小时的工资
#define BREAK_1		300//第一个工资计税分界点
#define BREAK_2		450//第二个工资计税分界点
#define RATE_1		0.15//BREAK_1内的税率
#define RATE_2		0.2//BREAK_1外，BREAK_2内的税率
#define RATE_3		0.25//BREAK_2外的税率
#define SELECT_1	8.75//基本工资
#define SELECT_2	9.33
#define SELECT_3	10.00
#define SELECT_4	11.20

double menu(void);//显示出菜单,根据用户输入确定基本工资
void count(double);//计算用户的税后收入（净收入）
