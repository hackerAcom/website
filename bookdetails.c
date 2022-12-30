#include <stdio.h>

#include <conio.h>

#include <string.h>

#define SIZE 20

struct bookdetail

{

    char name[20];

    char author[20];

    int id[20];

    float price[20];
};

void output(struct bookdetail v[20], int n);

int main()

{

    struct bookdetail b[SIZE];

    int n, i;

    printf("Enter the Numbers of Books:");

    scanf("%d", &n);

    printf("\n");

    for (i = 0; i < n; i++)

    {

        printf("\t=:Book %d Detail:=\n", i + 1);

        printf("\nEnter the Book id:\n");

        scanf("%s", b[i].id);

        printf("Enter the  Book name:\n");

        scanf("%s", b[i].name);

        printf("Enter the author name:\n");

        scanf("%d", &b[i].author);

        printf("Enter the Price of Book:\n");

        scanf("%f", &b[i].price);
    }

    output(b, n);
    getch();
}
void output(struct bookdetail v[], int n)

{

    int i, t = 1;

    for (i = 0; i < n; i++, t++)

    {

        printf("\n");

        printf("Book No.%d\n", t);

        printf("\t\tBook %d Name is=%s \n", t, v[i].id);

        printf("\t\tBook %d Author is=%s \n", t, v[i].name);

        printf("\t\tBook %d Pages is=%d \n", t, v[i].author);

        printf("\t\tBook %d Price is=%f \n", t, v[i].price);

        printf("\n");
    }
}