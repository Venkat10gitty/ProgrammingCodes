#include<stdio.h>
int main()
{
    int arr[5];
    int*p;
    p=arr;
    int i, sum=0;

    for(i=0;i<5;++i)
    {
        scanf("%d",(arr+i));
    }
     for(i=0;i<5;++i)
    {
        sum+=(*p++);

        printf("%d",sum);

    }
}