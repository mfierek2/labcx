// program obliczjący ile czasu upłynęło mniędzy dwoma datami
// zmieniłem trochę styl pisania własnych programów
// staram się teraz dzielić je logicznie na funkcję, a "{" przenoszę "/n"
// wydaje mi się to o wiele czytelniejsze

#include <stdio.h>

struct date
{
  int day;
  int month;
  int year;
};

long int count_date (struct date d)
{
  int f(int,int);
  int g(int);
  // wzór zaczerpnięty z książki - Język C. Kompendium wiedzy.
  // Stephena G. Kochana
  return (1461 * f(d.year, d.month) / 4) + (153 * g(d.month) / 5 + d.day);
}

int f(int y, int m)
{
  if (m <= 2)
    return y - 1;
  else
    return y;
}

int g (int m)
{
  if (m <= 2)
    return m + 13;
  else
    return m + 1;
}

long int date_diff (int n1, int n2)
{
  if( n1 > n2 )
    return n1 - n2;
  else
    return n2 - n1;
}

int main ()
{
  struct date dates[2];
  printf ("Podaj pierwszą datę w formacie dd:mm:yyyy: \n");
  scanf  ("%i:%i:%i", &dates[0].day, &dates[0].month, &dates[0].year);
  printf ("Podaj drugą datę w formacie dd:mm:yyyy: \n");
  scanf  ("%i:%i:%i", &dates[1].day, &dates[1].month, &dates[1].year);
  printf ("Ilość dni pomiędzy datami to: %li\n",date_diff(count_date(dates[0]), count_date(dates[1])));
}
