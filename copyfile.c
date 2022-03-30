#include<stdio.h>
int main()
{
    FILE*fp1,*fp2;
    char ch;
    int p;
    fp1=fopen("emp.txt","r");
    fp2=fopen("file3.txt","w");
    if(fp1==NULL)
    {
        printf("\n can't open a file....");
    }
    if(fp2==NULL)
    {
        printf("\n can't open a file....");
        
    }
    while(1)
    {
        ch=fgetc(fp1);
        if(ch==EOF)
        break;
        fprintf(fp2,"%c",ch);
        printf("%c",ch);
    }
    fclose(fp1);
    fclose(fp2);
}