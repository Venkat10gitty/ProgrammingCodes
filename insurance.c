#include<stdio.h>
float age;
char gender, marital;
int main()
{
    printf("Martial status (Y/N) : ");
    scanf("%s",&marital);
    
    if(marital=='Y')
    printf("\nYou are eligible for insurnace");
    
    else
    {
        printf("\nEmployee age is :");
        scanf("%f",&age);
        
        printf("\nEmployee gender :");
        scanf("%s",&gender);
        
        if((age>=35,gender='M'),(age>=30,gender='F'))
        printf("\nYou are eligible for insurnace");
        else
        printf("\nYou are not eligible for insurnace");
        
    }
}
