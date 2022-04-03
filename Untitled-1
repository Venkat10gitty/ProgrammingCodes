#include<stdio.h>
int minimax(int *mi,int *ma)
{
    int n;
    scanf("%d", &n) ;
    *mi = n;
    *ma = n;
    while(n!=0)
    {
        scanf("%d", &n) ;
        if (n>*ma)
        *ma = n;
        else if((*mi>n) && (n!=0))
        *mi = n;
    }

int main()
{
    int min, max;
    minimax (&min, &max);
    printf("%d\n%d", min, max);
    return 0;
}
}