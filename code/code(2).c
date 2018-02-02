/*求球的体积和表面积*/ 
#include <stdio.h>
void main()
{
   float r,s,v;//定义r为半径，s为表面积,v为体积 
   printf("请输入圆的半径: ");
   scanf("%f",&r);//输入半径 
   v=4.0/3*3.14*r*r*r;//计算体积
   s=4*3.14*r*r;//计算表面积 
   printf("V=%f\n",v);//输出体积 
   printf("S=%f\n",s);//输出表面积 
}
