/*编写一个程序，实现下述三色球问题；在12个球中，有红色球3只，白色球3只和黑色球6只。试问如果从12只球中取出8只，可能得到多少种颜色搭配；每种搭配中各个颜色的球有多少。*/
#include<stdio.h>
void main()
{
	int redball,writeball,blackball;//定义三个球 
	for(redball=0;redball<=3;redball++) //题中没有要求球必须得至少拿一个，故各颜色球的初始值可0可1。 
	for(writeball=0;writeball<=3;writeball++)
	for(blackball=0;blackball<=6;blackball++)
	if((redball+blackball+writeball)==8)//如果三个球相加等于8 
		printf("红球=%d,黑球=%d,白球=%d\n",redball,blackball,writeball);//则输出红球白球黑球的情况 
}
