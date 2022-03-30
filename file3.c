#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int countt=0,countn=0,counts=0;
    fp=fopen("fileread.txt","r");
    if(fp==NULL)
    {
        printf("\n cant open file");
    }
    else
    {
        printf("\n opened file successfully");

    }
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        break;
        if(ch=='\t')
        {
            countt++;

        }
        if(ch=='\n')
        {
            countn++;
        }
        if(ch==' ')
        {
            counts++;
        }
    }
    printf("\n no.of tabs=%d",countt);
    printf("\n no of newlines=%d",countn);
    printf("\n no.of spaces=%d",counts);
    fclose(fp);
    return 0;
}