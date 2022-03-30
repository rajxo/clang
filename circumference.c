#include<stdio.h>
int main(){
    int rad,area;
    float pi=3.14;
    printf("enter radius :");
    scanf("%d",&rad);
    area=pi*rad*rad;
    printf("area of circle is :%d",area);
    return 0;
}