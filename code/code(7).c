#include<stdio.h>
main()
{
int a,b,c,d,max,min;
printf("请输入四个数：");
scanf("%d%d%d%d",&a,&b,&c,&d);
max=(a>b)?a:b;
max=(max>c)?max:c;
max=(max>d)?max:d;
printf("max is %d\n",max);
min=(a<d)?a:b;
min=(min<c)?min:c;
min=(min<d)?min:d;
printf("min is %d\n",min);
}
