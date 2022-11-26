#include<stdio.h>

int fact(int n)
{
    if( n==0 )
    {
        return (1);
    }
    return (n*fact(n-1));
}
int main()
{
    int num, facto;
    scanf("%d",&num);
    facto = fact(num);
    printf("%d",facto);
}
