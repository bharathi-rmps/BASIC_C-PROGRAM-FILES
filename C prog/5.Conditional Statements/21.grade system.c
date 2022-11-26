#include<stdio.h>
int main()
{
    int a = 100;
    if( a>=90 )
        printf("A grade");
    else if( a>=80 )
        printf("B grade");
    else if( a>=70 )
        printf("C grade");
    else if( a>=60 )
        printf("D grade");
    else if( a>=50 )
        printf("E grade");
    else
        printf("Fail");
}
