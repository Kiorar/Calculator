#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {


    int running = 1;
    while(running) {
        char a;
        printf("\nEnter 'a' to calculate, 'q' to quit:\n");
        scanf(" %c", &a);

        if(a == 'q') {
            running = 0;
            break;
        } else if(a == 'a') {
            double number1, number2, result;
            char operator;

            printf("Enter the first Number:\n");
            scanf("%lf", &number1);

            printf("Enter an operator:\n");
            scanf(" %c", &operator);

            printf("Enter the second Number:\n");
            scanf("%lf", &number2);

            switch(operator) {
                case '+': result = number1 + number2; break;
                case '-': result = number1 - number2; break;
                case '*': result = number1 * number2; break;
                case '/': result = number1 / number2; break;
                default: 
                    printf("Operator is invalid\n"); 
                    continue; 
            }

            printf("Your result is: %lf\n", result);


        } else {
            printf("Invalid option\n");
        }
    }


    printf("Goodbye!\n");
    return 0;
}