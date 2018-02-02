#include <stdio.h>
void main()
{
    int i, j, k;
	for(i=4;i>0;i--)     
	{
      for(j=9;j-i>0;j--)
	  {
		  printf(" ");//输出空格
	  }
	  
	  {
	  for(j=1;j<=2*i-1;j++)    /* 观察每行*号的数量*/
	printf("*");//每行输出的*号
	  printf("\n");//每次循环换行
	  }
	}
}