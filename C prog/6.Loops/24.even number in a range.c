#include<stdio.h>
int main()
{
    int beg, end;
    scanf("%d %d",&beg,&end);
    for( int i=beg ; i<=end ; i++)
    {
        if( i%2==0 )
            printf("%d ",i);
    }
}
