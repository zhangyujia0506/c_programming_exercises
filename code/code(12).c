/*编写一个程序，完成以下功能：从键盘输入100个整数，统计其中偶数的平均值。*/
#include <stdio.h>
void main()
{
int n[100];//定义整型数组大小为100 
int i=0;//定义循环体 
int x=0;//定义x 
int y=0;//定义y 
printf("请一次输入100个整数：");
for(i=0;i<100;i++)//循环<100 
{
scanf("%d",&n[i]);//输入 100个数 
}
for(i=0;i<100;i++)
{
if(n[i] % 2 ==0)//判断是否是偶数，如果是就保留 
{
y++;//计算偶数的数量 
x=x+n[i];//偶数和 
}
}
printf("100个数中偶数的平均数:%d\n",x/y);//用偶数的总和/偶数的数量 =偶数的平均数 

}
