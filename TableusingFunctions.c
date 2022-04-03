#include<stdio.h>
int table(int,int);
void main()
{
    int n1, n2, d;
    printf("enter");
    scanf("%d%d", &n1, &n2);
    d = table(n1,n2);
    printf("\n%d",d);
}
void table(int n1, int n2)
{
    int i;
    for(i=1;i<=n2;++i)
    return n1*i;
}