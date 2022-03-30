#include<stdio.h>
#include<conio.h>
int main ()
{
    int n1,n2;
    printf("enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    if (n1>n2)
    {
        printf("\n %d is bigger number",n1);
    }
    else
    {
        printf("\n %d is bigger number",n2);
    }
     return 0;
}