#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int second;

    printf("Input seconds : ");
    scanf("%i", &second);

    printf("The time is : %i:%i\n",
           second/60, second%60);

    system("PAUSE");

    return 0;
}