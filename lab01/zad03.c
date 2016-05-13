//program testujący działanie operatorów z efektami ubocznymi w różnych sytuacjach,
//od których może zależeć wynik działania np.:
//a[i++] = 0;   oraz   a[++i] = 0;
//y = (x += 2);
//z = (x %= 3) + (x %= 4);y = (x += 2);
//z = (x %= 3) + (x %= 4);
#include <stdio.h>
#define ROZMIAR 5
#define X 10
#define A 3

void dziwneFor(int tab[],int size) {
  int i;
  for(i = 0; i < size;)
    printf("%d ", tab[i++]); //działa poprawnie
  printf("\n\n");
}

void sprPostAndPre(int tab[],int a) {
    int i,tmp;
    tmp = a;
    tab[a++] = 0;
    a = tmp;
    tab[++a] = 1;
    printf("tab[a++] = 0, tab[++a] = 1\n" );
    printf("Dla a = %d", A);
    for(i = 0; i < ROZMIAR; ++i)
      printf("%d ",i);
    printf("\n\n");
    dziwneFor(tab,ROZMIAR);
    printf("To nie to samo!!\n");
}

void aryt(int x) {
  int y,z;
  y = (x += 2);
  z = (x %= 3) + (x %= 4);
  printf("x = %d, y = %d, z = %d\n",x,y,z);
}


int main() {
  int tab[] = {1,2,3,4,5};
  dziwneFor(tab,ROZMIAR);
  sprPostAndPre(tab,A);
  aryt(X);
}
