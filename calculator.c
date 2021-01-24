/*Създайте програма, която подканя човека да въведе проста аритметична операция с две числа от екрана 
- събиране, изваждане, деление, умножение и отпечатва резултата. 
Помислете какви променливи и колко трябва да имате?
Колко са вариантите, които можете да имате, като операции,
има ли изключителни случаи, за които трябва да помислим (напишете си ги)?
Какво ще използвате за управление на процеса ?*/
#include <stdio.h>

void calculator();

int main(void){
    calculator();
    return 0;
}

void calculator(){
    double a, b, res;
	char choice;
	printf("Write two numbers:\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	printf("Choose aritmetic operation of these: ('*', '/',  '+', '-')\n");
	scanf("\n%c", &choice);
	switch(choice){
		case '/':
			if(b == 0) {
				printf("You can not divide by 0.\n"); // изключение, не може да се дели на 0
				break;
			}
			res = a / b;
			printf("%lf / %lf = %lf\n",a,b,res);
			break;
		case '*':
			res = a * b;
			printf("%lf * %lf = %lf\n",a,b,res);
			break;
		case '+':
			res = a + b;
			printf("%lf + %lf = %lf\n",a,b,res);
			break;
		case '-':
			res = a - b;
			printf("%lf - %lf = %lf\n",a,b,res);
			break;
		default:
			printf("Invalid operator\n");
			break;			
	}		
}