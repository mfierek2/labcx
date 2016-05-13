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


#include<stdio.h>


int decrypt(int n) {
  return -n;
}

void print_ch(int n) {
  int buffer[4];
  for ( int i = 0; i < 4; ++i) {
    buffer[i] = n & 255;
    n >>= 8;
  }
  for ( int i = 3 ; i >= 0; ++i)
    printf("%c", (char)buffer[i]);
}

int main () {
  int n, read;
  read = scanf("%i", &n);
  while ( read == 1 ) {
    print_ch(decrypt(n));
    read = scanf("%i", &n);
  }
}
