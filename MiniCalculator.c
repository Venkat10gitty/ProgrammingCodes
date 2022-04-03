#include <stdio.h>
int main()
 {
    char operator;
    int first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%d %d", &first, &second);
    
    if(operator == '+')
        printf("%d + %d = %d", first, second, first + second);
        
    if(operator == '-')
        printf("%d - %d = %d", first, second, first - second);
        
    if(operator == '*')
        printf("%d * %d = %d", first, second, first * second);
        
    if(operator == '/')
        printf("%d / %d = %d", first, second, first / second);
        
}