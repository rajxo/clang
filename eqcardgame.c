#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int k;
        scanf("%d",&k);
        int remainder = 0;
        remainder = 52 % k;
        printf("%d\n",remainder);
    }
}