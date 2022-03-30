#include<stdio.h>
int main()
{
    int arr[20];
    int n,i;
    int *ptr=arr;
    printf("\n enter no of elements in array:");
    scanf("%d",&n);
    printf("\n enter elements in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
    printf("\n array elements are:");
    for(i=0;i<n;i++)
    {
        printf("\n %d",*ptr);
        ptr++;
    }

}
