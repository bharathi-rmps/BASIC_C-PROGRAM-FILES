#include<stdio.h>
int main()
{
    int num, rev = 0 , temp, rem;
    scanf("%d", &num);
    temp = num;
    while(num!=0)
    {
        rem = num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    if( rev==temp )
        printf("Palindrome");
    else
        printf("not a Palindrome");
}
