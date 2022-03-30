#include<stdio.h>
int main()
{
    FILE *fp;
    char name[100];
    int age;
    float salary;
    fp=fopen("emp.txt","a");
    if(fp==NULL)
    {
        printf("\n file not found.....");
    }
    printf("\n enter name;");
    scanf("%s",name);
    fprintf(fp,"name=%s\n",name);
    printf("\n enter age:");
    scanf("%d",&age);
    fprintf(fp,"age=%d\n",age);
    printf("\n enter salary:");
    scanf("%f",&salary);
    fprintf(fp,"salary=%f\n",salary);
    fclose(fp);
    
}