#include <stdio.h>
void swap(int * x, int *y){
    int  * temp  = x;
    x = y;
    y = temp;
}
int main(){
    int a = 5;
    int * ptr = &a;

    printf("%d",*ptr);
}