#include<stdio.h>
int a;
int main()
{
    printf("Enter the number : ");
    scanf("%d",&a);

    if(a>=0)
    printf("The abs value is %d",a);

    else
    {
        a=-(a);
        printf("The abs value is %d",a);
        
    }
}