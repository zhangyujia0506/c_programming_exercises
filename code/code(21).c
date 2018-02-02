#include <stdio.h>
void main()
{
	int i;
	float a=1,sum=0;
	for (i=1;i<101;i++)
	{
		sum=sum+a/i;
		a=a*(-1);
	}
	printf("1-1/2+1/3-1/4....-1/100=%f\n",sum);
}