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


unsigned int do_liczby (int zn[] ) {
  unsigned int liczba = 0;
  liczba |= ( zn[0] << 24);
  liczba |= ( zn[1] << 16);
  liczba |= ( zn[2] << 8);
  liczba |= zn[3];
  return liczba;
}
void z_liczby( char zn[], unsigned int liczba) {
    zn[0] = (liczba & 0xFF000000);
    zn[1] = (liczba & 0x00FF0000);
    zn[2] = (liczba & 0x0000FF00);
    zn[3] = (liczba & 0x000000FF);
}

int main() {

  char bufor[1000];
  char do_szyfr[4];
  unsigned int za_szyfr[1000];
  int i;
  int n = 0;
  while ( (bufor[i] = getchar()) != EOF ) i++;
  i = 0;
    for(i = 0; i < sizeof(bufor)/sizeof(char) ; n++,i++) {
      do_szyfr[n] = bufor[i];
      if( n == 3) {
        n = 0;
        for()
        printf("%u",szyfruj(do_liczby(do_szyfr[]));
      }
    }
  }
}
