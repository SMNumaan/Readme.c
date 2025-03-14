#include <stdio.h>

int main()
{
    char op;
    int num1, num2;
printf("use: ");
scanf("%d %c %d", &num1, &op, &num2);

if (op == '+'){
printf("%d\n" , num1 + num2);
}

else if(op == '-'){
printf("%d\n" , num1 - num2);
}

else if(op == '*'){
    printf("%d\n" , num1 * num2);
    }

else if(op == '/'){
        printf("%.2f\n" , (float)num1 / num2);
        }

return 0;
}