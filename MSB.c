/*Write a C program to check Most Significant Bit (MSB) of a number is set or not.*/

#include <stdio.h>

int main()
{
    int i=7;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &i);

    /* If ((i>>7) & 1) evaluates to 1 */
    if((i>>7) & 1)
        printf("MSB of %d is set (1).", i);
    else
        printf("MSB of %d is unset (0).", i);

    return 0;
}
