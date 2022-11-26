#include<stdio.h>
int main()
{
    int beg, end, sum = 0;
    scanf("%d %d",&beg,&end);
    for( int i=beg ; i<=end ; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
}

