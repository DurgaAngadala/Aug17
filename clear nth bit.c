/*Write a C program to clear nth bit of a number.*/

#include <stdio.h>
int main()
{
    int j, n, newj;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &j);

    /* Input bit number you want to clear */
    printf("Enter nth bit to clear (0-31): ");
    scanf("%d", &n);

    /*
     * Left shifts 1 to n times
     * Perform complement of above
     * finally perform bitwise AND with j and result of above
     */
    newj = j & (~(1 << n));

    printf("Bit cleared successfully.\n\n");
    printf("Number before clearing %d bit: %d (in decimal)\n", n, j);
    printf("Number after clearing %d bit: %d (in decimal)\n", n, newj);

    return 0;
}
