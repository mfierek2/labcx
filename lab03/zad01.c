// program, który bada poznane typy liczbowe w C; t.zn. ustala
// ilość bajtów, przeznaczonych na zmienną (operator sizeof),
// największą i najmniejszą wartość liczby,
// ,,ziarno'', czyli najmniejszą taką liczbę x, że 1.0+x≠1.0 ,
// ,,precyzję'', czyli maksymalną liczbę cyfr dziesiętnych po kropce

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("|    TYP      |       MINIMUM       |       MAXIMUM       |      ZIARNO     |      PRECYZJA    |      WE/WY     |\n");
  printf("|-------------|---------------------|---------------------|-----------------|------------------|----------------|\n");
  printf("|SHORT        |%21i|%21i|                 |                  |       %%i       |\n",SHRT_MIN,SHRT_MAX);
  printf("|INTEGER      |%21i|%21i|                 |                  |       %%i       |\n",INT_MIN,INT_MAX);
  printf("|LONG         |%21li|%21li|                 |                  |       %%li      |\n",LONG_MIN,LONG_MAX);
  printf("|LONG LONG    |%21lli|%21lli|                 |                  |       %%lli     |\n",LLONG_MIN,LLONG_MAX);
  printf("|FLOAT        |%21e|%21e|%17le|%18d|   %%f lub %%e    |\n",FLT_MIN,FLT_MAX,FLT_EPSILON,FLT_DIG);
  printf("|DOUBLE       |%21e|%21e|%17le|%18d|  %%lf lub %%le   |\n",DBL_MIN,DBL_MAX,DBL_EPSILON,DBL_DIG);
  printf("|LONG DOUBLE  |%21Le|%21Le|%17Le|%18d|   %%Lf lub %%Le  |\n",LDBL_MIN,LDBL_MAX,LDBL_EPSILON,LDBL_DIG);
}
