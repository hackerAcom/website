// C program to reverse a number
#include<stdio.h>
int main(){//let a=321;
    int a,rem;
    printf("enter number:");
    scanf("%d",&a);
    while (a>0)
    {
       rem=a%10;
       printf("%d",rem);
       a/=10;
    }
}
