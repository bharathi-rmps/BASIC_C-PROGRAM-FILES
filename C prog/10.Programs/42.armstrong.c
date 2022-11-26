#include<stdio.h>
int main()
{
    int a = 370, arm = 0, rem, temp1, temp2, count = 0;
    temp1 = a;
    temp2 = a;
    while(a!=0)
    {
        a = a/10;
        count = count+1;
    }
    while(temp1!=0)
    {
        rem = temp1%10;
        arm = arm+(pow(rem,count));
        temp1 = temp1/10;
    }
    if( temp2== arm )
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
}
