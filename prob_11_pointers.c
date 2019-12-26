#include <stdio.h>

int main(void) {
  int a = 5;
  int *p = &a;
  *p = 6;

  printf("address of a = %ld p = %ld\n", &a, p);
  printf("a = %d value at p = %d\n", a, *p);
  return 0;
}