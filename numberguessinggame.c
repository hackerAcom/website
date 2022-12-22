#include <stdio.h>
int main()
{
    int luckynumber = 99; // declare luckynumber for win
    int i;
    printf("enter number between (1-100):"); // input number by user for guessing the number for win
    printf("you have three chance to guess luckynumber");
    scanf("%d", &luckynumber);
    if (luckynumber == 99) // condition for luckynumber
    {
        printf("congratulation your win");
    }
    else
    {
        printf("your choose unlucky number \n");
        printf("your have two chance remain:\n");
        for (i = 1; i < 2; i++)
        {
            printf("enter number between (1-100):");
            scanf("%d", &luckynumber);
        }
        if (luckynumber==99)
        {
             printf("congratulation your win");
        }
        else{
            printf("your choose unlucky number\n");
            printf("your have one chance remain:\n");
            for (i = 1; i < 2; i++)
        {
            printf("enter number between (1-100):");
            scanf("%d", &luckynumber);
        }
        if (luckynumber==99)
        {
             printf("congratulation your win");
        }
        else{
            printf("your choose unlucky number\n");
            printf("your have no chance remain\n:");
        }
        
        }
        
    }

}
