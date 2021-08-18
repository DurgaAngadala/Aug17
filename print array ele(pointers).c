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
    
/*c program to print array elements in reverse order using pointers*/    

#include<stdio.h>
#define N 5
void fun(int *a)
{ 
    int i,b;
    for(i=0; i<N; i++)
    printf("\n%d",*(a+i));
    printf("\nReverse order\n");
    for(i = N-1; i>=0; i--)  
    printf("%d\n", *(a+i));
}
int main()
{   
    int i;
    int b[5]={5,4,6,8,9};
    int *a=&b[0];
    fun(a);
    return 0;
}

OUTPUT:
5
4
6
8
9
Reverse order
9
8
6
4
5
