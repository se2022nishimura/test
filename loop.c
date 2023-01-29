#include <stdio.h>

int main(void) {
  int x = 0;
  for (int i = 0; i < 10; i++) {
    x = x + i;
  }
  printf("%d", x);
  return (0);
}