#include <stdio.h>

void add2Data(void);


extern int data[];

void add2Data(void)
{
    int x;

    for(x=0;x<5;x++)
        data[x] += 10;          /* add 10 */
    puts("* We added 10 to Data  *");

}
