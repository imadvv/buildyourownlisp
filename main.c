#include <stdio.h>
void hello(int n) {
  if (n > 10 && n <= 20) {
    printf("%d: is supported", n);
  } else {
    printf("%d: not supported , choose number between 10 and 20", n);
  }
}

int main() {

  hello(12);
  return 0;
}
