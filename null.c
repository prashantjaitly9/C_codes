#include <stdio.h>

int main()
{
	char str[30];
	int a;
	char ch;
	float f;
	double db;
	unsigned int i;
	int oct;

	printf("Enter a character: ");
	scanf("%c", &ch);
	printf("The entered character is: %c", ch);

	printf("\nEnter a string: ");
	scanf("%s", &str);
	printf("The entered string is: %s", str);

	printf("\nEnter an integer: ");
	scanf("%d", &a);
	printf("The entered integer is: %d", a);

	printf("\nEnter a real value: ");
	scanf("%f", &f);
	printf("The entered real value is: %f", f);

	printf("\nEnter a large real number: ");
	scanf("%lf", &db);
	printf("The entered number is: %f", db);

	printf("\nEnter an unsigned number: ");
	scanf("%d", &i);
	printf("The unsigned integer is: %u", i);

	printf("\nEnter a number whose octal value you wish to know: ");
	scanf("%d", &oct);
	printf("\nThe octal value is: %o", oct);
	return 0;
}
