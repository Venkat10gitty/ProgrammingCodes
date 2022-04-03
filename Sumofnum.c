#include<stdio.h>
int n;
float sum;
int main()
{
    printf("\nEnter the number : ");
    scanf("%d",&n);
    
    sum = (n*(n+1))/2;
    printf("Sum is %f",sum);

}