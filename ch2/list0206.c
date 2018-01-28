#include <stdio.h>

int main(void)
{
  int n;
  double x;

  n = 9;
  x = 9.99;

  printf("int型の変数nの値: %d\n", n);
  printf("n / 2: %d\n", n / 2);

  printf("double型の変数xの値: %f\n", x);
  printf("x / 2.0: %f\n", x / 2.0);

  return 0;
}
