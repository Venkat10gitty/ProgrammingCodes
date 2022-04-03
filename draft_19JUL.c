#include <stdio.h>
int main()
{
     int arr1[10], arr2[10], i, n;

     printf("Enter number of elements: ");
     scanf("%d", &n);

     for(i=0; i<n; ++i)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &arr1[i]);
     }
     for(i=0; i<n; ++i)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &arr2[i]);
     }

fgets(arr1,5,stdin);
strlen(arr1);
gets(arr2);
strlen(arr2);
   return 0;
}
