#include<stdio.h>
 #include<string.h>

int main()
{
    
    int num1 , num2;
    char str[20];

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d" , &num2);
    
    printf("what do u wanna do?");
    scanf("%s" , &str);

    if (strcmp(str, "sum") == 0)  // Use strcmp() for string comparison
    printf("Sum: %d" , num1 + num2);

    else if (strcmp(str , "sub") == 0)
    printf("Difference: %d" , num1 - num2); 

    else if (strcmp(str , "product") == 0)
    printf("Product: %d" , num1 * num2);

    else if (strcmp(str , "division") == 0)
    printf("Quotient: %.2f" , (float) num1 / num2); // using float specifically for proper division

    else 
    printf("invalid operation\n"); // handling

    
    return 0;
}
