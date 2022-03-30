#include<stdio.h>
int main()
{
    int i,j,m,n,a[10][10];
    printf("\n enter number of rows and coloumns:");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n enter value of (%d)(%d)",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        printf(" %d\t",a[i][j]);
    }
}