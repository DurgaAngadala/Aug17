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
    fun(a);
    return 0;
}

OUTPUT:
5
4
6
8
9
