#include <stdio.h>

int main()
{
	char *string = "Greetings from the digital realm!\n";


	while(*string != '\0')
	{
		putchar(*string); // value
		//printf(" is at the location %p\n", string);
        string++; // memory location

	}

	return(0);
}

