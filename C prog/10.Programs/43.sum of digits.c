#include<stdio.h>
int main()
{
    int sum = 0, i, a;
    scanf("%d",&a);
    for( i=0 ; i<=a ; i++ )
    {
        sum = sum + i;
    }
    printf("%d",sum);
}
