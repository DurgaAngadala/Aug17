/*Write a C program to check Least Significant Bit (LSB) of a number is set or not.*/

#include <stdio.h>

int main()
{
    int j;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &j);

    /* If (j & 1) evaluates to 1 */
    if(j & 1)
        printf("LSB of %d is set (1).", j);
    else
        printf("LSB of %d is unset (0).", j);

    return 0;
}
