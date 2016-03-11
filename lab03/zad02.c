//  W każdym typie liczbowym znaleźć możliwie małe dane,
//  na których wynik jakiegoś działania matematycznego jest już niepoprawny.

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main () {
  short wynik;
  int wynik_dwa;

  wynik = SHRT_MAX + 1;

  printf("SHORT %i + 1  = %i, a powinno być 32776\n",SHRT_MAX, wynik);

  wynik_dwa = INT_MAX + 1;

  printf("INT %i + 1 = %i");
  
 }
