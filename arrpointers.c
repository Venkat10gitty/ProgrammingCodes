#include<stdio.h>
int main()
{
    int arr[5];
    int*p;
    p=arr;
    int i;

    for(i=0;i<5;++i)
    {
        scanf("%d",p);
        p++;
    }
    p=arr;
     for(i=0;i<5;++i)
    {
        printf("\n Element  with adress %d = %d", p, *p);
        p++;
    }
}