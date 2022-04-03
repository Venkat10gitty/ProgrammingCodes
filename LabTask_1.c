#include<stdio.h>
int main()
{
    int power(int a, int b)
    {
        int c;
        c=a^b;

        return c;
    }
    int n1, n2, N;

    printf("Enter the 2 values : ");
    scanf("%d %d",&n1, &n2);

    N=power(n1,n2);

    printf("%d Power of %d is %d ", n1, n2, N);

}