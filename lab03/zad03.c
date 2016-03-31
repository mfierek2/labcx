// Sprawdzić, wykonując odpowiednie testy, jak działają operacje rzutowania z typów ,,mniejszych'' do ,,większych'' i odwrotnie.
// Na przykład, czemu są równe:
//    * (int)FLT_MAX
//    * (int)DBL_MAX
//    * (double)LDBL_MAX

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

  printf("FLT_MAX -> (int)FLT_MAX:\n%e -> %i\n\n", FLT_MAX, (int)FLT_MAX);
  //wyznacza maksymalna (czyli jak najblizsza zadanej(float)) liczbe w innym typie (int)
  printf("INT_MAX -> (float)INT_MAX:\n%i -> %e\n\n", INT_MAX, (float)INT_MAX);
  //wypisuje maksymalna wartosc inta (float > int)
  printf("DBL_MAX -> (int)DBL_MAX:\n%e -> %i\n\n", DBL_MAX, (int)DBL_MAX);
  //wyznacza maksymalna (czyli jak najblizsza zadanej(double)) liczbe w innym typie (int)
  printf("INT_MAX -> (double)INT_MAX:\n%i -> %e\n\n", INT_MAX, (double)INT_MAX);
  ////wypisuje maksymalna wartosc inta (double > int)
  printf("LDBL_MAX -> (double)LDBL_MAX:\n%Le -> %e\n\n", LDBL_MAX, (double)LDBL_MAX);
  //wypisuje infinity(?) (byc moze roznica miedzy long double maxem a longiem jest tak duza ze komputer upraszcza zapis na "inf")
  printf("LONG_MAX -> (float)LONG_MAX:\n%li -> %e\n\n", LONG_MAX, (float)LONG_MAX);
  //wypisuje maksymalna wartosc longa(float > long)
  printf("INT_MAX -> (float)INT_MAX:\n%i -> %e\n\n", INT_MAX, (float)INT_MAX);
  //wypisuje maksymalna wartosc inta (float > int)
  return 0;
}
