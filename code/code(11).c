/*
        *****
       *****
      *****
     *****
    *****
*/
#include<stdio.h>
void main()
{
	int i,j; /*i为行，j为列*/
	for(i=1;i<6;i++)    /*每行前输出的空格*/
	{
		for(j=1;j<10-i;j++)
		printf(" ");
		for(j=1;j<6;j++)  /*每行输出五个星号*/
		printf("*");
		printf("\n");
	}
}
