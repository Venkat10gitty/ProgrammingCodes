#include<stdio.h>
int i, sum=0, n, marks[10], average;
int main()
{
    printf("Number of numbers : ");
    scanf("%d",&n);

    for(i=1;i<=n;++i)
    {
        printf("Enter the mark of %d subject : ",i);
    scanf("%d",&marks[i]);

    sum+=marks[i];
    }
    average = sum/n;

    printf("Sum of marks is %d",sum);
    printf("\nAverage of marks is %d",average);
}