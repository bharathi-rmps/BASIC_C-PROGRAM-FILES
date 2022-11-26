#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],i,n,l=0;
    printf("enter the number of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     if(a[i]>a[i+1])
     {
         l=a[i];
     }
     else
     {
         l=a[i+1];
     }
    }
    printf("largest number is%d",l);
}
