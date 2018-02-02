#include<stdio.h>
int main()
{
    int sum = 0,n = 100;
    while(n > 0)
    {
        if (n % 7 == 0||n % 9 == 0)
        {
            sum += n;
            
        }
        -- n;
    }
    printf("%d\n", sum);
    return 0;
}
