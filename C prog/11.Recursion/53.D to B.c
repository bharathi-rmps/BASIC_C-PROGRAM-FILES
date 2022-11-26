#include <stdio.h>
int dec(long long int n)
{
    if(n==0)
        return 0;
    else
        return (n%10+2*dec(n/10));
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    printf("Decimal Value of Binary number %d is: %d",n,dec(n));
}
