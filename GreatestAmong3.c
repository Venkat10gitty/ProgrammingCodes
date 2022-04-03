#include<stdio.h>
int a, b, c;
int main()
{
    printf("Enter values a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);

    if((a>b)&(a>c))
    printf("Greatest among a,b,c is a and its value is %d", a);

    else
    {
        if(b>c)
        printf("Greatest among a,b,c is b and its value is %d", b);

        if(b<c)
        printf("Greatest among a,b,c is c and its value is %d", c);

    }
}