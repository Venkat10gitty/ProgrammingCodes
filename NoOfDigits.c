#include<stdio.h>
int n, i=0, digits;
int main()
{
    printf("Enter the number : ");
    scanf("%d",&n);

    for(;n>0;)
    n/=10;
    digits = ++i;

    printf("No of digits is %d",digits);

    
}
