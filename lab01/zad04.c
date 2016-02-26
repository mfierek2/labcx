// Sprawdzenie dzialania programu
#include <stdio.h>

int main() {
  int n = 0;
  if ( n = 0 )
    printf("Rowne\n");
  else
    printf("Nierowne\n");
}
// Pomimo tego, że n = 0, na ekranie zobaczymy napis: "Nierowne". A jest tak
// dlatego, że C traktuje 0 jako fałsz, a wyrażnie n = 0 ma właśnie taką
// wartość. Najpierw przypisujemy n wartość 0, a następnie robimy to samo.
// Istrukcja if sprawdza wartość n jest ona równa 0 więc zostaje wykonana
// instrukcja po else.
