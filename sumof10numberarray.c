#include <stdio.h>
int main()
{
    int a[10], sum = 0, i;
    for (i = 0; i < 10; i++)
    {
        printf("enter 10 number:");
        scanf("%d", &a[i]);
    }
    for ( i = 0; i <10; i++)
    {
        sum = sum + a[i];
      
    }  
    printf("a[%d]=%d",i,sum);
}