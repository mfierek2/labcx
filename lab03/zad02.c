//  W każdym typie liczbowym znaleźć możliwie małe dane,
//  na których wynik jakiegoś działania matematycznego jest już niepoprawny.


#include <stdio.h>

int main() {

  short s = 1, s2 = 1/2;
  printf("Short: %i / 2 = %i\n", s, s2);

  int i = 1, i2 = i/4;
  printf("Int: %i / 4 = %i\n", i, i2);

  long l = 1, l2 = l + 0.5;
  printf("Long: %li + 0.5 = %li\n", l, l2);

  long long ll = 1, ll2 = ll + 0.99;
  printf("Long long: %lli + 0.99 = %lli\n", ll, ll2);

  float fl = 0.000001, fl2 = fl / 2.0;
  printf("Float: %f / 2 = %f\n", fl, fl2);

  double d = 0.000003, d2 = d / 4.0;
  printf("Double: %f / 4 = %f\n", d, d2);

  long double ld = 0.00000000000000005, ld2 = ld / 4.0;
  printf("Long double: %Lf / 4 = %Lf\n", ld, ld2);

}
