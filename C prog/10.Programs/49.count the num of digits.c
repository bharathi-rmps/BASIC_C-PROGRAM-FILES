#include<stdio.h>
int main()
{
    int a = 12345, rem, count = 0;
    while(a!=0)
    {
        a = a/10;
        count = count+1;
    }
    printf("%d",count);
}
