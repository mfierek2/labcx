// Ten program obsługuje duży spis osób opisanych strukturą:
//
//   typedef struct {
//     char imie[IMIE_MAX+1];
//     char nazwisko[NAZW_MAX+1];
//     int pensja;
//   } osoba;
//    osoba spis[IL_OSOB];
// Jego inicjalizacja składa się z wywołania funkcji:
// utworz_spis -- napisanej przeze mnie, można do niej nie zaglądać;
// sortuj_spis -- którą trzeba napisać samemu.
// Po inicjalizacji program pyta o nazwisko lub imię osoby i znajduje w spisie brakujące dane na jej temat: imię, nazwisko i pensję.
// Należy napisać ciała funkcji znajdz_nazwisko oraz znajdz_imie -- ich nagłówki i komentarze opisujące sposób działania są w programie podane.

// W pierwszej wersji można nie realizować funkcji sortuj_spis, a wyszukiwanie zorganizować jakkolwiek.
//  W drugiej (lepszej) wersji zrobić funkcję sortuj_spis i w wyszukiwaniu wg nazwisk wykorzystać fakt, że spis jest uporządkowany.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define IMIE_MAX 10
#define NAZW_MAX 15
#define IL_OSOB 10000

typedef struct {
  char imie[IMIE_MAX+1];
  char nazwisko[NAZW_MAX+1];
  int pensja;
} osoba;

osoba spis[IL_OSOB];

//=======================================================

void  utworz_spis(void) {
  FILE* baza =
    fopen("/home/pracinf/stefan/public_html/Dydaktyka/JezProg/Slajdy/Labs05/baza_danych",
  "r");
  if (baza == NULL) printf("\n ZLE\n\n");
  for (int i=0; i<IL_OSOB; i++) {
    fscanf(baza, "%s", spis[i].imie);
    fscanf(baza, "%s", spis[i].nazwisko);
    fscanf(baza, "%i", &spis[i].pensja);
  }
  fclose(baza);
}

//=======================================================
// co tu się dzieje?
//int compare(const void* a, const void* b) {
//    return strcmp(*(osoba**)a, *(osoba**)b);
//}

//=======================================================


//void  sortuj_spis() {
//  qsort ( spis, IL_OSOB, sizeof(osoba), compare);
//}

//=======================================================

int  znajdz_nazwisko (char *na, char *im, int *p)
{

	for(int i = 0; i < IL_OSOB; ++i){
		if(strcmp( spis[i].nazwisko, na) == 0){
		strcpy( im, spis[i].imie );
		*p = spis[i].pensja;
		return 1;
		}
	}

	return 0;
}

//=======================================================
//połaczyć znajdz nazwisko i znajdz imie
int  znajdz_imie (char *im, char *na, int *p)
{

	for( int i = 0; i < IL_OSOB; ++i ){
		if( strcmp( spis[i].imie, im) == 0 ){
		strcpy( na, spis[i].nazwisko );
		*p = spis[i].pensja;
		return 1;
		}
	}
	return 0;
}

//=======================================================

int main () {
  char odpowiedz, im[NAZW_MAX+1], na[IMIE_MAX+1];
  int p;

  utworz_spis(); //sortuj_spis();

  do {
    printf(
     "\n Znalezc wg imienia (I), nazwiska (N), czy zakonczyc (Q)? "
    );
    do { odpowiedz = getchar(); }
    while (isspace(odpowiedz));
    odpowiedz = tolower(odpowiedz);
    switch (odpowiedz) {
    case 'i' :
      printf("\n szukane imie: ");
      scanf("%s", im);
      if (znajdz_imie(im, na, &p))
	printf(" IMIE: %s, NAZWISKO: %s, PENSJA: %i\n", im, na, p);
      else  printf(" nie ma imienia %s\n", im);
      break;
    case 'n' :
      printf("\n szukane nazwisko: ");
      scanf("%s", na);
      if (znajdz_nazwisko(na, im, &p))
	printf(" IMIE: %s, NAZWISKO: %s, PENSJA: %i\n", im, na, p);
      else  printf(" nie ma nazwiska %s\n", im);
      break;
    case 'q' : break;
    default :
      printf(" Poprawne odpowiedzi: N, I, Q.\n");
    }
  }  while (tolower(odpowiedz) != 'q');

  printf("\n DZIEKUJE.\n\n");

}
