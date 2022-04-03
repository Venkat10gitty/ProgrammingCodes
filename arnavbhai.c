#include<stdio.h>
int main()
{
    float h, cc, ts;
    int f=0,g;
    scanf("%f",&h);
    scanf("%f",&cc);
    scanf("%f",&ts);
    if (h>60 && cc<0.9 && ts>6000)
        f=1;
    else if (h>60 && cc<0.9)
        f=2;
    else if (cc<0.9 && ts>6000)
        f=3;
    if (f==1)
        g=10;
    else if(f==2)
        g=9;
    else if(f==3)
        g=8;
    if(f!=0)
        printf("The grade of steel is: %d", g);
    else
        printf("Inavlid input");
        
    return 0;
}