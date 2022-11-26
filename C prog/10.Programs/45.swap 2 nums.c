#include<stdio.h>
int main()
{
    int a = 10, b = 20, t;
    printf("Before swap a = %d & b = %d",a, b);
    t = a;
    a = b;
    b = t;
    printf("\nAfter swap a = %d & b = %d",a, b);
}
