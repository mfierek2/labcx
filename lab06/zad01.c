// Do niepełnego programu w C,
// zawierającego prototypy funkcji obsługujących podstawowe działania na listach.
// Należy dopisać ciała tych funkcji tak, żeby robiły to o czym mowa w komentarzach.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_DL_SLOWA 30

typedef struct sl {
  char slowo[MAX_DL_SLOWA];
  struct sl* dalej;
}*  lista;

//=======================================================

int pusta(lista lis) {
  if( lis -> slowo == NULL )
    return -1;
  else
    return  0;
  // jesli  lis  jest lista pusta (wskaznik  NULL)
  // to wartoscia jest liczba rozna od 0, w przeciwnym razie 0
}

//=======================================================

char* pierwsze(lista lis) {
  // zwraca pierwsze slowo z listy  lis
  // jesli jest pusta, to dzialanie nieokreslone
  return lis -> slowo;
}

//=======================================================

lista reszta(lista lis) {
   return lis -> dalej;
  //  zwraca liste  lis  z usunietym pierwszym slowem
  //  jesli jest pusta, to dzialanie nieokreslone

}

//=======================================================

lista dolacz(char slow[MAX_DL_SLOWA], lista lis) {
  // dolacza  slowo  do poczatku listy  lis
  lista tmp = (lista)(malloc(sizeof(struct sl)));
  strcpy (tmp -> slowo, slow);
  tmp -> dalej = lis;
  return tmp;

}

//=======================================================

void druk(lista lis) {
  // drukuje po kolei wszystkie slowa z  lis
  lista tmp = lis ;
  while ( tmp != NULL ) {
    printf ("%s\n", tmp -> slowo);
    tmp = tmp -> dalej;
  }
}

//=======================================================

lista odwroc(lista lis) {
  //odwraca liste  lis  od konca
  lista pom = NULL;
  char slowo[MAX_DL_SLOWA];
  while (! pusta(lis)) {
    strcpy(slowo, pierwsze(lis)); lis = reszta(lis);
    pom = dolacz(slowo, pom);
  }
  return pom;
}

//=======================================================

int main () {
  lista lis = NULL;
  lis = dolacz("abc", dolacz("def", dolacz("ghi", lis)));
  druk(odwroc(lis));
}
