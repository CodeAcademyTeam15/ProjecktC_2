#include <stdio.h>

void calc(void);
void menu(void);

int main(void){
    
    calc();
    return 0;
}

void calc(void){
    double a, b, res;
    char choice;

    printf("First number:\n");
    scanf("%lf", &a);

    while(1){
        printf("Choose aritmetic operation of these: ('*', '/',  '+', '-')\n");
        scanf("\n%c", &choice);
        if(choice=='*'||choice=='/'||choice=='-'||choice=='+'){
            break;
        }
    }

    printf("Second number:\n");
    scanf("%lf", &b);

    switch (choice){
    case '/':
        if (b == 0)
        {
            printf("You can not divide by 0.\n"); // изключение, не може да се дели на 0
            break;
        }
        res = a / b;
        printf("%lf / %lf = %lf\n", a, b, res);
        break;
    case '*':
        res = a * b;
        printf("%lf * %lf = %lf\n", a, b, res);
        break;
    case '+':
        res = a + b;
        printf("%lf + %lf = %lf\n", a, b, res);
        break;
    case '-':
        res = a - b;
        printf("%lf - %lf = %lf\n", a, b, res);
        break;
    default:
        printf("Opps. Something went wrong! a= %lf  b= %lf  operator is: %c\n", a, b, choice);
        break;
    }

    menu();
}

void menu(void){

    char choice;
    printf("Would you like to continue? (y/n)");

    scanf("\n%c", &choice);
    switch (choice){
    case 'y':
        calc();
        break;
    case 'n':
        printf("\nGoodbye");
        break;
    default:
        printf("\nPlease choose a valid answer!\n");
        menu();
        break;
    }

}
