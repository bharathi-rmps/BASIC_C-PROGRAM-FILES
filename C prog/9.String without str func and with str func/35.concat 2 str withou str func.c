#include<stdio.h>
int main()
{
    char a[300]="my name is ", b[300]="bharathi";
    int soa = 0, i , j;
    for( i=0 ; a[i]!='\0' ; i++ )
    {
        continue;
    }
    soa = i;
    for( j = 0 ; b[j]!='\0' ; i++,j++ )
    {
        a[i] = b[j];
    }
    for( i=0 ; a[i]!='\0' ; i ++)
    {
    printf("%c",a[i]);
    }
}
