//0112358
#include<stdio.h>
int main(){
    int a=0,b=1,n,i,fibo;
    printf("enter number term:");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for ( i = 0; i < n; i++)
    {
        fibo=a+b;
        a=b;
        b=fibo;
        printf("%d\t",fibo);
    }
    
}