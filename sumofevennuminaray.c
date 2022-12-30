#include <stdio.h>
int main()
{
    int a[5], i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            continue;
        }
    }

    for ( i = 0; i < 5; i++)
    {
     sum = sum + a[i];
    }printf("a[%d]\n=%d",i,sum);
    
}