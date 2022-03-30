#include<stdio.h>
int main()
{
    int a[30],n,*p,sum;
    printf("\n enter number of elements:");
    scanf("%d",&n);
    for(p=a;p<a+n;p++)
    {
        printf("\n enter number of elemnts in array");
        scanf("%d",p);
    }
    for(p=a,sum=0;p<a=n;p++)
    sum=sum+*p;
    printf("\n sum=%d",sum);
    
}