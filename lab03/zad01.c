// program, który bada poznane typy liczbowe w C; t.zn. ustala
// ilość bajtów, przeznaczonych na zmienną (operator sizeof),
// największą i najmniejszą wartość liczby,
// ,,ziarno'', czyli najmniejszą taką liczbę x, że 1.0+x≠1.0 ,
// ,,precyzję'', czyli maksymalną liczbę cyfr dziesiętnych po kropce

#include <stdio.h>
#include <limits.h>

int main() {
  int i = 0;
  int j = 0;
  for( j = 0; j < 10; ++j) {
    for ( i = 0; i < 50; ++i) {
      if(i % 10 == 0)
        printf("|");
      else if (j % 2 == 0)
        printf("-");
    }
    printf("\n");
  }
}
