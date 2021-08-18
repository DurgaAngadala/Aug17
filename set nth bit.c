/*Write a C program to set nth bit of a number.*/

#include <stdio.h>
int main()
{
    int j, n, newj;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &j);

    /* Input bit position you want to set */
    printf("Enter nth bit to set (0-31): ");
    scanf("%d", &n);

    /* Left shift 1, n times and perform bitwise OR with j */
    newj = (1 << n) | j;

    printf("Bit set successfully.\n\n");
    printf("Number before setting %d bit: %d (in decimal)\n", n, j);
    printf("Number after setting %d bit: %d (in decimal)\n", n, newj);

    return 0;
}