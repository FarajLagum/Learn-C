#include <stdio.h>

void displayData(void);
void manipulateData(void);
void add2Data(void);

int data[5] = { 2, 3, 5, 7, 9 };

int main()
{
    displayData();

    manipulateData();
    displayData();

    add2Data();
    displayData();

    return(0);
}
