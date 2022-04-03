#include<stdio.h>
struct employee
{
    int id,age,salary;
    char name[25];
}emp[100];
int main()
{
    int i;
    printf("");
    for(i=0;i<5;i++)
    {
        scanf("%d %s %d %d",&emp[i].id,emp[i].name,&emp[i].age,&emp[i].salary);
    }
    for(i=0;i<5;i++)
    {
        if(emp[i].salary>60000 || emp[i].salary>='C')
        printf("%d %s %d %d\n",emp[i].id,emp[i].name,emp[i].age,emp[i].salary);
    }
}