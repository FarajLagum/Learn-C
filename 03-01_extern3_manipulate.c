#include <stdio.h>

void displayData(void);
void manipulateData(void);


extern int data[]; // We have to declare it with "extren" key word because
                   // it was originaly declared outside this module (ie, in the main module).

void displayData(void)
{
    int x;

    printf("Data Set:\n");
    for(x=0;x<5;x++)
        printf("%2d\t",data[x]);
    putchar('\n');
}

void manipulateData(void)
{
    int x;

    for(x=0;x<5;x++)
        data[x] *= 2;          /* double x */
    puts("* Data manipulated *");
}
