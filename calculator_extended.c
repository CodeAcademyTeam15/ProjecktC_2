#include <stdio.h>

void validate();
double calculate(double a, double b, char choice);

int main(void){
    validate();
    return 0;
}

void validate(){
    double a, b;
    char choice, next;
    while (1){
        printf("\nEnter the first number:\n");
        scanf("%lf", &a);
        while (1){
            printf("Enter an operation +, -, * or / :\n");
            scanf("\n%c", &choice);
            if ((choice != '+') && (choice != '-') && (choice != '*') && (choice != '/')){
                printf("Invalid operation\n");
                continue;
            } else {
                break;
            }
        }
        while (1){
            printf("Enter the second number:\n");
            scanf("%lf", &b);
            if (choice == '/' && b == 0) {
                printf("Oops! You cannot divide by 0.\n");
                continue;
            } else { 
                break;
            }
        }
        printf("%lf %c %lf = %lf\n", a, choice, b, calculate(a, b, choice));
        printf("\nFor another calculation press '1'\nPress '0' to quit\n");
        scanf("\n%c", &next);
        if (next == '1'){
            continue;
        } else if (next == '0'){
            break;
        }
    }
}

double calculate(double a, double b, char choice){
    double result;
    switch(choice){
		case '/':
			result = a / b;
			break;
		case '*':
			result = a * b;
			break;
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;			
	}		
    return result;
}