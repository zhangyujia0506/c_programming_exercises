/*编写一个程序，从键盘输入x、y、z，判断x+y=z是否成立，如果成立输入“x+y=z”，如果不成立输入“x+y!=z”。*/
#include<stdio.h>
void main()
{
	int x,y,z;//定义x,y,z三个数 
	scanf("%d%d%d",&x,&y,&z);//输入x,y,z三个数 
	if(x+y==z)//判断条件： 如果x+y=z 
		printf("%d+%d=%d",x,y,z);//则输出这个结果 
	else
		printf("%d+%d!=%d",x,y,z);//否则不等于这个结果 
}
