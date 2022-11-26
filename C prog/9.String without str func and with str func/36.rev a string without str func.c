#include<stdio.h>
int main()
{
    char a[10]="hello";
    int i, soa;
    for( i=0 ; a[i]!='\0' ; i++ )
    {
    }
    soa = i;
    for( i=soa ; i>=0 ; i-- )
    {
        printf("%c",a[i]);
    }
}
