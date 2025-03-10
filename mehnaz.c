#include <stdio.h>
int main()
{
    for(int n=0; n<=5; n++)
    {
    for(int m=0; m<n; m++)
    {
    printf("*");
    }
    printf("\n");
    }

    int i, j;
    for(i = 5; i >= 1; i--) {  // Outer loop for rows (5 to 1)
        for(j = 1; j <= i; j++) {  // Inner loop for printing '*'
            printf("*");
        }
        printf("\n");  // Move to the next line
    }

return 0;

}