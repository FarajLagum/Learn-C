#include <stdio.h>

int main()
{
	int a,*ptra;
	a=5;

	ptra = &a;
	printf("Address of a = %p\n",&a);
	printf("Pointer ptra = %p\n",ptra);
	printf("Pointer *ptra value = %d\n",*ptra);

	return(0);
}

