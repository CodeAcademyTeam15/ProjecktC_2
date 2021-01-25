#include <stdio.h>
#include <ctype.h>

/*Създайте програма, която подканя човека да въведе проста аритметична операция с две числа от екрана 
- събиране, изваждане, деление, умножение и отпечатва резултата. 
Помислете какви променливи и колко трябва да имате?
Колко са вариантите, които можете да имате, като операции,
има ли изключителни случаи, за които трябва да помислим (напишете си ги)?
Какво ще използвате за управление на процеса ?*/

void calculator(void);
void menu(void);


int main(void){

	calculator();
	return 0;
}

void calculator(void){

	double a, b, res;
	char choice;

	printf("Enter value for number 1: ");
	scanf("%lf", &a);

	printf("\nEnter value for number 2: ");
	scanf("%lf", &b);


	printf("\nChoose aritmetic operation of these('*', '/',  '+', '-'): ");
	scanf("\n%c", &choice);

	cycle:if(ispunct(choice)){
		goto switchMenu;
	} else {
		printf("\nyou entered wrogn. enter again: ");
		scanf("\n%c", &choice);
		goto cycle;
	}

    switchMenu:
	switch (choice){
    case '/':
        if (b == 0)
        {
            printf("You sure you want to divide by 0? No problem. Here\'s your ZERO you dirty animal. Keep the change.\n"); // изключение, не може да се дели на 0
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
        printf("cabooom");
		break;
    }
    menu();
}

void menu(void){
    char choice;

    printf("Want to continue? (y/n)");
    scanf("\n%c", &choice);

    switch (choice){
    case 'y':
        calculator();
        break;
    case 'n':
        printf("Goodbye\n");
        break;
    default:
        printf("Enter a valid answer!\n");
        menu();
        break;
    }
}