#include<stdio.h>
int main()
{
    int i;
    printf("For loop\n");
    for( i=1 ; i<=100 ; i++ )
    {
        printf(" %d ",i);
    }
    printf("\nWhile loop\n");
    i=1;
    while(i<=100)
    {
        printf(" %d ",i);
        i++;
    }
    i=1;
    printf("\nDo-While loop\n");
    do
    {
        printf(" %d ",i);
        i++;
    }
    while( i<=100 );
}
