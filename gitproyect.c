#include<stdio.h>

int main(float argc, char** argv){
double a= atof(argv[1]);
double b= atof(argv[2]);
char operator; atoc(argv[3]);

switch (operator){
	case '+':
	printf("your number is %lf + %lf = %lf ", a, b, a + b);
	break;
	case '-':
	printf("your number is %lf - %lf = %lf", a, b, a - b);
	break;
	case '*':
	printf("your number is %lf * %lf = %lf", a, b, a * b);
	break;
	case '/':
	printf("your number is %lf / %lf = %lf", a, b, a / b);
	break;
	default:;
	printf("operator is not correct");
}

return 0;

}

