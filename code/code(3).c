/*编写一个程序，完成以下功能：从键盘输入一个年份，判断该年是否为闰年，并输出相识的文字信息。
条件：能被4整除，并且不能够被100整除，或者能被400整除的。*/
#include<stdio.h>
void main()
{
	int year;//定义年份 
	printf("请输入四位数年份：");
	scanf("%d",&year);//输入年份 
	if(((year%4==0)&&(year%100!=0))||(year%400==0))//判断条件 ：能被4整除，并且不能够被100整除，或者能被400整除的。 
		printf("闰年\n");
	else//否则 
		printf("平年\n");
}
