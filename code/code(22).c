#include<stdio.h>
void main()
{ int Max=0,Min,p;
  int i;
  printf("������� 1 ����:");
  scanf("%d",&p);
  Max=p;
  Min=p;
  for(i=2;i<=10;i++)
  { printf("������� %d ����:" ,i);
    scanf("%d",&p);
    if(p>Max)
      Max=p;
    else if(p<Min)
      Min=p;
  }
  printf("�����Ϊ:%d\n��С��Ϊ:%d\n",Max,Min);
}
