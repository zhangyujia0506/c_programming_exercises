#include <stdio.h>
void main()
{
    int i, j, k;
	for(i=4;i>0;i--)     
	{
      for(j=9;j-i>0;j--)
	  {
		  printf(" ");//����ո�
	  }
	  
	  {
	  for(j=1;j<=2*i-1;j++)    /* �۲�ÿ��*�ŵ�����*/
	printf("*");//ÿ�������*��
	  printf("\n");//ÿ��ѭ������
	  }
	}
}