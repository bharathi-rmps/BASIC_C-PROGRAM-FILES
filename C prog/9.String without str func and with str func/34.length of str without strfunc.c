#include<stdio.h>
int main()
{
    char a[10]="abcd";
    int i;
    for( i=0 ; a[i]!='\0' ; i++ )
    {
        continue;
    }
    printf("%d",i);
}
