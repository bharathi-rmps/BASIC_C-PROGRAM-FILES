#include<stdio.h>

int add(int num1, int num2)
{
    return num1+num2;
}

int main()
{
    int a = 10, b = 20, sum;
    sum = add(a,b);
    printf("%d", sum);
}

