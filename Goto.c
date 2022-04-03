#include<stdio.h>
int age;
int main()
{
    india:
    printf("\nEnter the number : ");
    scanf("%d",&age);
    
    if(age<=0)
    {
        printf("age is invalid");
        goto india;
    }
    else
    printf("valid age");

    
}