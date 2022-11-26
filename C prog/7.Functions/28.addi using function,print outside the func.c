#include<stdio.h>
int add()
{
    int a, b;
    scanf("%d %d",&a, &b);
    return a+b;
}

int main()
{
    int result;
    result = add();
    printf("%d", result);
}
