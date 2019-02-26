#include <stdio.h>
#include <string.h>

#define SIZE 64


int main()
{
	char string[SIZE];
	int length, outer, inner, temp;

/* Get the string */
    printf("Tyoe some text: ");


	for(x=0;x<SIZE;x++)
		numbers[x] = rand() % 100 + 1;

/* Display the unsorted array */
	puts("Unsorted array:");
	for(x=0;x<SIZE;x++)
		printf(" %3d",numbers[x]);
	putchar('\n');

/* Sort the array */
	qsort(numbers,SIZE,sizeof(int),compare);

/* Display the sorted array */
	puts("Sorted array:");
	for(x=0;x<SIZE;x++)
		printf(" %3d",numbers[x]);
	putchar('\n');

	return(0);
}

int compare(const void *a, const void *b)
{
	return( *(int *)a - *(int *)b );
}

