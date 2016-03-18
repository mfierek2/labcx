// Napisać program, który wczytuje dwie liczby całkowite i wywołuje powyższą funkcję, /a
// następnie drukuje iloraz całkowity oraz resztę z dzielenia wczytanych liczb.
#include <stdio.h>

void fp5(int n, int k, int *q, int *r) {
  //wczytaj n i k;
  //oblicz q i r;
  *q = n / k;
  *r = n % k;
}

int main () {
  int iloraz, reszta, a,b;
  printf("Podaj dwie liczby: \n");
  scanf("%d %d",&a,&b);

  fp5(a,b,&iloraz,&reszta);

  printf("Iloraz %d / %d = %d, Reszta %d %% %d = %d\n",\
  a, b , iloraz ,a , b, reszta);
}
