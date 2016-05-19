// program którego wywołanie z argumentami spowoduje
// wypisanie tych argumentów w odwrotnej kolejności
// napisać funkcję drukujaca argumenty podane do programu na trzy sposoby.
// uzględnić separator.
#include <stdio.h>

void print_array(int n, char* arr[], char sep )
{
  for (int i = --n; i > 0; --i)
  {
    printf("%s", arr[i]);
    if (i != 1 )
      printf("%c",sep);
    else printf ("\n");
  }
}

int main (int argc, char *argv[])
{
  char s;
  printf ("Separator: ");
  scanf  ("%c",&s);
  print_array(argc,argv,s);
}
