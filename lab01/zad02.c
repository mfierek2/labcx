#include <stdio.h>
int main () {
  char z;
  while( (z = getchar()) != EOF)
    printf("%c",z);
}
