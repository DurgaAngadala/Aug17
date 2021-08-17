/*c program to print array elements using pointers*/

#include<stdio.h>
void fun(int *a)
{ 
    int i;
    for(i=0; i<5; i++)
    printf("\n%d",*(a+i));
}
int main()
{
    int b[5]= {5,4,6,8,9};
    int *a=&b[0];
    int i;
    for(i=0; i<5; i++)
    printf("\n%d",*(a+i));
    for(i=0; i<5; i++)
    printf("\n %d at %u ",*(a+i),(a+i));
    return 0;
}

OUTPUT:
5
4
6
8
9
 5 at 572107456 
 4 at 572107460 
 6 at 572107464 
 8 at 572107468 
 9 at 572107472 