#include<stdio.h>
int main()
{
    int n, prod = 1;
    scanf("%d", &n);
    for( int i=n ; i>0 ; i-- )
    {
        prod = prod*i;
    }
    printf("%d ",prod);
}
