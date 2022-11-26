#include<stdio.h>
int main()
{
    int a[10][10], col, row;
    for( col=0 ; col<3 ; col++ )
    {
        for( row=0 ; row<3 ; row++ )
        {
            printf("\nEnter %d col %d row value : ", col, row);
            scanf("%d",&a[col][row]);
        }
    }
    for( col=0 ; col<3 ; col++ )
    {
        for( row=0 ; row<3 ; row++ )
        {
            printf("%d ",a[col][row]);
        }
        printf("\n");
    }
}
