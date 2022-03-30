#include<stdio.h>
int main ()
{
    int x,y,*p,*q;
    int temp;
    p=&x;
    q=&y;
    x=5; y=10;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\n after swapping:");
    printf("\n x=%d \n y=%d",x,y);
}