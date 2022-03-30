#include<stdio.h>
int main(){
    int no,buy,sell,profit,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&no,&buy,&sell);
        profit=(no * sell) - (no * buy);
        printf("%d\n",profit);

    }
}