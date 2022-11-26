#include <stdio.h>

void reverse(char *a, int begin, int end) {
  char temp;
  if (begin >= end)
    return;
  temp = *(a + begin);
  *(a + begin) = *(a + end);
  *(a + end) = temp;

  reverse(a, ++begin, --end);
}

int main() {
  char a[100];
  scanf("%s", a);
  reverse(a, 0, strlen(a)-1);
  printf("%s", a);
}
