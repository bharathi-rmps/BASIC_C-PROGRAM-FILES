#include <stdio.h>

int hcf(int a, int b) {
  if(b == 0)
  {
    return a;
  }
  else
  {
    return hcf(b, a % b);
  }
}

int main()
{
    int number1, number2, gcd, lcm;
    scanf("%d %d", &number1, &number2);
    gcd = hcf(number1, number2);
    lcm = (number1*number2)/gcd;
    printf("HCF of %d and %d = %d\n", number1, number2, gcd);
    printf("LCM of %d and %d = %d\n", number1, number2, lcm);
}
