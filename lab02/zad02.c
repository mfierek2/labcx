// Pewien program wczytuje dzień (między 1 a 31), miesiąc (między 1 a 12) i rok (liczbę całkowitą dodatnią, niewiększą niż 223−1),
// wszystkie trzy dane pakuje do jednej 32-bitowej liczby całkowitej, jak na poniższym rysunku drukuje tą liczbę.
// Program wydrukował liczbę 1032225. Co to była za data?
// Poniższy program, który potrafi odczytać datę z każdej liczby, zestawionej w podany wyżej sposób.

#include <stdio.h>

int main() {
  int digit;
  printf("Podaj liczbe: \n");
  scanf("%d",&digit);
  int day = (digit & 0x0000001F);
  int month = (digit & 0x000001E0) >> 5;
  int year = (digit & 0xFFFFFE00) >> 9;
  printf("Dzien = %d, Miesiac = %d, Rok = %d\n",day,month,year);
}
