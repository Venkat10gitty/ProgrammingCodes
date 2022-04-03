#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, i, *p, sum=0;
    float avg;
    printf("Enter total number of elements: ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("insufficient memory");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter number : ");
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
        printf("\n%d",*(p+i));
    }
    free(p);
    printf("\nsum is : %d",sum);
    printf("\navg is : %f",(float)sum/n);
}