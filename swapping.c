#include<stdio.h>
#include<stdio.h>
int main(){
int a,b,temp;
printf("enter two numbers:- ");
scanf("%d %d",&a,&b);
printf("\n before swapping two numbers :%d %d",a,b);
temp=a;
a=b;
b=temp;
printf("\n after swapping two numbers :%d %d",a,b);
return 0;
}