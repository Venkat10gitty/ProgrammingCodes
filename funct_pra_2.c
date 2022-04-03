#include<stdio.h>
int compare(int,int,int);
int main()
{
    int a, b, c, d;
    printf("Enter three values : ");
    scanf("%d%d%d",&a,&b,&c);
    d = compare(a, b, c);
}
int compare(int x1,int x2,int x3)
{
    int z;
    if(x1>x2)
    {
        if(x2>x3)
        z = printf("First largest is %d and second largest is %d", x1, x2);
        else
    }
    
    {
        if(x2>x1 && x2>x3 && x1>x3)
        z = printf("First largest is %d and second largest is %d", x2, x1);
    }
    return z;
}