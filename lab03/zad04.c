// Eksperymentalnie zbadać ,,ziarno'' w różnych typach rzeczywistych.
// W tym celu należy wykonać pętlę postaci podobnej do poniższej:
//    x = 1.0;
//    while (1.0+x > 1.0)
//    x = x/2.0;
// dla zmiennej x zadeklarowanej kolejno jako float, double i long double.

#include <stdio.h>

int main() {

  int l = 1;

  printf("Float:\n");

  float n = 1.0;
  while(1.0 + n > 1.0) {
    n = n / 2.0;
    printf("%i. %f => %e\n", l, n, n);
    l++;
  }

  l=1;

  printf("Double:\n");

  double k = 1.0;

  while( 1.0 + k > 1.0) {
    k = k / 2.0;
    printf("%i. %f => %e\n", l, k, k);
    k++;
  }

  l = 1;

  printf("Long double:\n");

  long double m = 1.0;

  while(1.0 + m > 1.0) {
    m = m / 2.0;
    printf("%i. %Lf => %Le\n", l, m, m);
    l++;
  }

}
