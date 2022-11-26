#include<Stdio.h>
int main()
{
    int a[10], lar=0;
    for( int i=0 ; i<10 ; i++ )
    {
        scanf("%d",&a[i]);
        if( lar<a[i] )
            lar = a[i];
    }
    printf("%d",lar);
}
