#include <stdio.h>

int main()
{
	int numb;
	char *classification;

	printf("Enter your number: ");
	scanf("%d",&numb);

	classification = ( numb % 2 ) ? "Odd" : "Even";
	printf("You entered an %s number.\n",classification);

	return(0);
}

