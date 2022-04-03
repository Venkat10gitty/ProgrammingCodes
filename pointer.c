#include<stdio.h>
int main()
{
    int a=10;
    int*p;
    p=&a;

    printf("Adress of a is %u",&a);
    printf("\nAdress of a is %u",p);
    printf("\n%d %d",a,*p);
    printf("\nAdress of p is %u",&p);
    *p=30;
    printf("\n%d %d",a,*p);
    




}