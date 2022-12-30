#include <stdio.h>
int main()
{
    int luckynumber = 99; // declare luckynumber for win
    int i; 
    printf("you have three chance to guess luckynumber\n");
    printf("enter number between (1-100):"); // input number by user for guessing the number for win
   
    scanf("%d", &luckynumber);
    if (luckynumber>100)
    {
        printf("you choose greater than 100 and you are wrong\n");
    }
    
    if (luckynumber == 99) // condition for luckynumber
    {
        printf("congratulation your win");
    }
    else
    {
        printf("you choose unlucky number \n");
        printf("you have two chance remain:\n");
        for (i = 1; i < 2; i++)
        {
            printf("enter number between (1-100):");
            scanf("%d", &luckynumber);
            if (luckynumber>100)
            {
            printf("you choose greater than 100 and you are wrong\n");
            }
            
        }
        if (luckynumber==99)
        {
             printf("congratulation your win");
        }
        else{
            printf("you choose unlucky number\n");
            printf("you have one chance remain:\n");
            for (i = 1; i < 2; i++)
        {
            printf("enter number between (1-100):");
            scanf("%d", &luckynumber);
            if (luckynumber>100)
            {
                printf("you choose greater than 100 and you are wrong\n");
            }
            
        }
        if (luckynumber==99)
        {
             printf("congratulation your win \n");
             printf("\nif you are  wrong in last chance then your \n are idiot but you are not idiot  ");
        }
        else{
            printf("you choose unlucky number\n");
            printf("you have no chance remain\n:");
        }
        
        }
        
    }

}