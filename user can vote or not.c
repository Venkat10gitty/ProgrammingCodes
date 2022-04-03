#include<stdio.h>
int age;
int main()
{
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=18)
    printf("\nYou can vote");

    else
    printf("\nYou cannot vote");
}