#include<stdio.h>
int main()
{
    char a[10]="madam",b[50],c[10]="hello ";
    strrev(a);
    printf("%s",a);
    strcpy(b,a);
    printf("\n%s",b);
    strcat(c,a);
    printf("\n%s",c);
    printf("\n%d",strlen(a));
}
