#include<stdio.h>
float average (int,int,int);
int main()
{
    int a,b,c;
    float d;
    printf("Enter 3 integers");
    scanf("%d %d %d",&a,&b,&c);
    d=average(a,b,c);
    printf("avg is: %f",d);
    return 0;
}
float average(int x, int y, int z)
{

    float x1;
    x1=(float)(x+y+z)/3;
    return x1;
}