/*Write a C program to get nth bit of a number.*/

#include <stdio.h>
int main()
{
    int j, n, bitStatus;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &j);

    /* Input bit position you want to check */
    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);

    /* Right shift j, n times and perform bitwise AND with 1 */
    bitStatus = (j >> n) & 1;

    printf("The %d bit is set to %d", n, bitStatus);

    return 0;
}