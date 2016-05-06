// program którego wywołanie z argumentami spowoduje
// wypisanie tych argumentów w odwrotnej kolejności
//  napisać funkcję drukujaca argumenty podane do programu na trzy sposoby.
// uzględnić separator. 
#include <stdio.h>

int main (int argc, char *argv[])
{
  for (int i = --argc; i > 0; --i) {
    printf("%s", argv[i]);
    if (i != 1 ) printf(" ");
    else printf ("\n");
  }
}
