/*编写程序，完成如下功能：从键盘输入4个整数，输出其中最大的和最小的数值。*/
#include <stdio.h>
void main()
{
	int iA=0,iB=0,iC=0,iD=0;//定义四个数 
	int iMin=0;//定义最大值变量 
	int iMax=0;//定义最小值变量 
	printf("请输入第一个数：");//输入第一个数给最大值变量和最小值变量 
	scanf("%d",&iA);
	iMin=iA;
	iMax=iA;
	printf("请输入第二个数：");//输入第二个数 
	scanf("%d",&iB);
	if(iMin>iB)//两个数进行比较 
		iMin=iB;//满足条件赋值给iMin，后边的数以此类推 
	if(iMax<iB)
		iMax=iB;
	printf("请输入第三个数：");
	scanf("%d",&iC);
	if(iMin>iC)
		iMin=iC;
	if(iMax<iC)
		iMax=iC;
	printf("请输入第四个数：");
	scanf("%d",&iD);
	if(iMin>iD)
		iMin=iD;
	if(iMax<iD)
		iMax=iD;
	printf("最小值为=%d\n最大值为=%d",iMin,iMax);//输出最大数和最小数 
}
