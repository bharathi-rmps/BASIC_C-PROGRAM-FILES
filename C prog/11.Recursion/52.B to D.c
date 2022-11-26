#include <stdio.h>

long long int bin(int num)
{
    if(num == 0)
        return 0;
    else
        return((num % 2) + 10 * bin(num/2));
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("Binary Number of %d is %lld", num, bin(num));
}
