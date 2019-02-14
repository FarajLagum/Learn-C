#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float a;
    printf(" Entere a number: ");
    scanf("%f", &a);
    a *=5;

    printf("The current value of a is %0.2f \n", a);

    printf("Press any key to continue: \n");

    getchar();

    a /=3;

    printf("The new value of a is %0.2f", a);


    return(0);


}
