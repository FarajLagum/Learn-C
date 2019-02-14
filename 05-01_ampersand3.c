#include <stdio.h>

int main()
{
	int a[10],*ptra, *pElement;

	ptra = a; // the array name by itself with no square brackets attached is the same as a pointer.
	pElement = &a[3];
	printf("Address of a = %p\n",a);
	printf("Address of a = %p\n",&a);
	printf("Pointer ptra = %p\n",ptra);

	printf("Address of a[3] = %p\n",&a[3]);
	printf("Pointer ptra = %p\n",pElement);

	return(0);
}

