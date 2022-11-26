#include<stdio.h>
int main()
{
    int a = 10, b = 20, min, max, i, ans;
    if( a>b )
    {
        min = b;
        max = a;
    }
    else
     {
        min = a;
        max = b;
     }
    for( i=1 ; i<=min ; i++ )
    {
        if( a%i==0 && b%i==0 )
        ans = i;
    }
    printf("HCF %d\n",ans);
    while(1)
    {
        if( max%a==0 && max%b==0 )
        {
            printf("LCM %d", max);
            break;
        }
        ++max;
    }
}

