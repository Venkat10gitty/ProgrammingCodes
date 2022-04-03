#include<stdio.h>
int i, n;
int main()
{
    printf("\nEnter the number : ");
    scanf("%d",&n);

    for(i=1;i<11;++i)
    {
    printf("\n%d x %d = %d ", n, i, n*i);
    }
}