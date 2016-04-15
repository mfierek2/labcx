// program którego wywołanie z argumentami spowoduje
// wypisanie tych argumentów w odwrotnej kolejności
#include <stdio.h>

int main (int argc, char *argv[])
{
  for ( int i = --argc; i > 0; --i) {
    printf(" %s", argv[i]);
  }
  printf ("/n");
}
