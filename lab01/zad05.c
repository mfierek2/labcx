// program wypisze NIE
// choć intuicja podpowiada nam cos innego
// w warunku wykonywane jest działanie
// 2 & 4 (0010 & 0100) co jest równe zeru
// więc warunek nie zostanie spełniony

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b;
  a = 2;
  b = 4;

  if ((a = 2) & (b = 4)) printf(" TAK\n");
  else printf("NIE\n");
  return 0;
}
