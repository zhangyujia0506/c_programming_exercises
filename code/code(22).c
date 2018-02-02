#include<stdio.h>
void main()
{ int Max=0,Min,p;
  int i;
  printf("请输入第 1 个数:");
  scanf("%d",&p);
  Max=p;
  Min=p;
  for(i=2;i<=10;i++)
  { printf("请输入第 %d 个数:" ,i);
    scanf("%d",&p);
    if(p>Max)
      Max=p;
    else if(p<Min)
      Min=p;
  }
  printf("最大数为:%d\n最小数为:%d\n",Max,Min);
}
