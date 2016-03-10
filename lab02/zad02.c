#include <stdio.h>

int main() {
  int digit;
  printf("Podaj liczbe: \n");
  scanf("%d",&digit);
  int day = (digit & 0x0000001F);
  int month = (digit & 0x000001E0) >> 5;
  int year = (digit & 0xFFFFFE00) >> 9;
  printf("Dzien = %d, Miesiac = %d, Rok = %d\n",day,month,year);
  return 0;
}
