#include<stdio.h>
  
long factorial(int num)     
{
  int i;
  long fact = 1;
  
  for (i = 1; i <= num; i++)
    fact = fact * i;
 return fact;       
}
  
int main()      
{
  int num;
  
  printf("");
  scanf("%d", &num);
  if(num<0) 
  {
   printf("Factorial is not defined for negative numbers.");
   }
  printf("%d", factorial(num));                                
   return 0;
}