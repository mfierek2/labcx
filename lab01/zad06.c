// program sprawdzajacy dzialnie fragmentów kodu :
// a = b = c = d = 0;
// for (i = 0; i < N; a[i++] = i);
// for (i = 0; i < N; a[++i] = i);
// i = 1; while ((i *= 2) < N);

// funkcja frag_one() przypisze każdej zmiennej wartość zero
// jest to normalne i legalne działanie w C
#include <stdio.h>
#define N 6

void frag_one() {
  printf("a = b = c = d = 0;\n");
  int a, b, c, d;
  a = b = c = d = 0;
  printf("a = %d, b = %d, c = %d, d = %d\n",a,b,c,d);
}

// funkcja frag_two wypełni tablice wartościami 1..N
// kolejność wykonywania działań jest następująca :
// najpierw odwołujemy sie do i-tego elemntu tablicy
// następnie zwiększamy i o jeden i przypisujemy
// watrość do elementu, do którego wcześniej się
// odwołaliśmy, pojawiające się ostrzerzenie
// wynika stąd, że w zależności od kompilatora
// możemy uzyskać różne wyniki, gdyż różne kompilatory
// mogą wykonwać te działania w różnej kolejnosci

void frag_two() {
  printf("for (i = 0; i < N; a[i++] = i);\n");
  int a[] = {23, 42, 12, 44, 55, 76};
  int i;
  for ( i = 0; i < N; a[i++] = i);
  for ( i = 0; i < N; ++i )
    printf("%d \n", a[i]);
}

// w funkcji frag_three występuje identyczny problem
// jak w funkcji frag_two, wyniki będą inne
// wartosc na a[0] zostanie zachowana, ponieważ
// i zostaje zwiększone przed odwołaniem sie do
// konkretnego elementu tablicy

void frag_three() {
  printf("for (i = 0; i < N; a[++i] = i);\n");
  int a[] = {23, 42, 12, 44, 55, 76};
  int i;
  for ( i = 0; i < N; a[++i] = i);
  for ( i = 0; i < N; ++i )
    printf("%d\n", a[i]);

}

void frag_four() {
  printf("for (i=0; i<N; a[++i]=i);\n");
  int i = 1;
  while (( i *= 2 ) < N)
    printf("Cos i wartosc i = %d \n", i );
}

int main(int argc, char const *argv[]) {
  frag_one();
  frag_two();
  frag_three();
  frag_four();
  return 0;
}
