// Program szyfrujący oraz współpracujący z nim program odszyfrowujący,
// działające w następujący sposób:
//
// wczytany tekst jest dzielony na grupy po 4 kolejne znaki; każda
// taka grupa szyfrowana jest oddzielnie;
// taką grupę traktuje się jak pojedynczą liczbę całkowitą;
// poddaje się ją jakiejś różnowartościowej funkcji matematycznej :
// n → −n     albo
// n → (n+k) % 232   gdzie k jest ustaloną liczbą całkowitą;
// otrzymany ciąg liczb przesyła się adresatowi;
// każdą otrzymaną liczbę adresat odszyfrowuje funkcją odwrotną do klucza,
// a następnie rozbija na 4 znaki; te znaki drukuje.


#include <stdio.h>

int szyfruj(int x) {
  return -x;
}


int do_liczby (int ile,int zn[] ) {
  unsigned int liczba;
  int i;
  int pos = 24;
  for ( i = 0; i < 4; ++i, pos = pos - 8 ) {
    liczba |= (zn[i] << pos );
    if(i == 3) {
      liczba |= zn[i];
    }
  }
  return liczba;
}

int main() {

  char bufor[1000];
  int do_szyfr[4];
  int za_szyfr[1000];
  int i = 0;
  int n = 0;
  int k = 0;
  while ( (bufor[i] = getchar()) != EOF ) i++;
  i = 0;
  while ( (bufor[i] != EOF )) {
    if (n < 4) {
      do_szyfr[n] = bufor[i];
      n++;
    }
    else {
      za_szyfr[k] = szyfruj(do_liczby(4,do_szyfr));
      k++;
      n = 0;
      printf("%i \n", za_szyfr[k-1]);
    }
    i++;
  }
}
