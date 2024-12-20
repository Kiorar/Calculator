#include <stdio.h>

int main(){


    char operator;
    double number1;
    double number2;
    double result;

    printf("Enter an operator\n");
    scanf("%c", &operator);

    printf("Enter the first Number:\n");
    scanf("%lf", &number1);

    printf("Enter the second Number:\n");
    scanf("%lf", &number2); 

    switch(operator){
        case '+':
        result  = number1 + number2;
        printf ("Your result is: %lf", result);
        break;

        case '-':
        result  = number1 - number2;
        printf ("Your result is: %lf", result);
        break;

        case '*':
        result  = number1 * number2;
        printf ("Your result is: %lf", result);
        break;

        case '/':
        result  = number1 / number2;
        printf ("Your result is: %lf", result);
        break;

    default:
            printf("\nOperator is Invalid");

    }

    return 0;
}