#include<stdio.h>
 #include<string.h>
int main()
{
    int n , m;
    char str[10];

    printf("choose numbers: ");
    scanf("%d %d", &n , &m);
    
    printf("what do u wanna do?");
    scanf("%s" , &str);

    if (strcmp(str, "sum") == 0)  // Use strcmp() for string comparison
    printf("Sum: %d" , n + m );

    else if (strcmp(str , "sub") == 0)
    printf("Difference: %d" , n - m); 

    else if (strcmp(str , "product") == 0)
    printf("Product: %d" , n * m);

    else if (strcmp(str , "devide") == 0)
    printf("Quotient: %.2f" , (float) n / m);

    else 
    printf("invalid operation\n");

    
    return 0;
}
