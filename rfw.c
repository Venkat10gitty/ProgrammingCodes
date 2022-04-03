#include <stdio.h>
#include <math.h>
void calculate(float r, float *a, float *p)  
{  
    *a = 3.14 * r * r;  
    *p = 2 * 3.14 * r;  
}

int main()
{
    float r,a,p;
    scanf("%f",&r);
    calculate(r,&a,&p);
    printf("%f\n",p);
    printf("%f",a);
    
    return 0;
}