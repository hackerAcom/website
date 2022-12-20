#include<stdio.h>
int main(){
    int a[3],i,j;
    int b;
    for ( i = 0; i < 10; i++)
    {
        printf("enter 3 number for ascending order:");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <10; i++)
    {
        for ( j = 1; j < i; j++)
        {
            if(a[i]<a[j]){
                b=a[i];
                a[i]=a[i+1];
                a[i+1]=b;
                
            }
        }
        
    }
    for ( i = 0; i <10; i++)
    {
        printf("%d\n",a[i]);
    }
    
    
    return 0;
}