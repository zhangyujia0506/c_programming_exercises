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
	int i,j; /*iΪ�У�jΪ��*/
	for(i=1;i<6;i++)    /*ÿ��ǰ����Ŀո�*/
	{
		for(j=1;j<10-i;j++)
		printf(" ");
		for(j=1;j<6;j++)  /*ÿ���������Ǻ�*/
		printf("*");
		printf("\n");
	}
}
