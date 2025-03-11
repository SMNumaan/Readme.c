#include<stdio.h>
 #include<string.h>
int main()
{
    float n , m;
    char str[10];

    printf("choose numbers: ");
    scanf("%f %f", &n , &m);
    
    printf("what do u wanna do?");
    scanf("%s" , &str);

    if (strcmp(str, "sum") == 0)  // Use strcmp() for string comparison
    printf("Sum: %f" , n + m );

    else if (strcmp(str , "sub") == 0)
    printf("Difference: %f" , n - m); 

    else if (strcmp(str , "product") == 0)
    printf("Product: %f" , n * m);

    else if (strcmp(str , "devide") == 0)
    printf("Quotient: %f" , n / m);

    else 
    printf("invalid operation\n");

    
    return 0;
}
