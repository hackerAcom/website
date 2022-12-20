#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    char address[20];
};
int main(){
struct student s1;
printf("enter roll number:");
scanf("%d",&s1.roll);
printf("enter name :");
scanf("%s",&s1.name);
printf("enter address:");
scanf("%s",&s1.address);
printf("information about student:\n");
printf("the roll:%d\n the name:%s\n the address:%s",s1.roll,s1.name,s1.address);
printf("\n");
struct student s2;
printf("enter roll number:");
scanf("%d",&s2.roll);
printf("enter name :");
scanf("%s",&s2.name);
printf("enter address:");
scanf("%s",&s2.address);
printf("information about student:\n");
printf("the roll:%d\n the name:%s\n the address:%s",s2.roll,s2.name,s2.address);

}

