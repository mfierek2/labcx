// program, który bada poznane typy liczbowe w C; t.zn. ustala
// ilość bajtów, przeznaczonych na zmienną (operator sizeof),
// największą i najmniejszą wartość liczby,
// ,,ziarno'', czyli najmniejszą taką liczbę x, że 1.0+x≠1.0 ,
// ,,precyzję'', czyli maksymalną liczbę cyfr dziesiętnych po kropce

#include <stdio.h>
#include <limits.h>

int main() {
    printf("%d",INT_MIN );
    printf("%d", INT_MAX);

}
