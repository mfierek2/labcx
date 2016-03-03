// Program, który wczytuje tekst aż do EOF
// a następnie drukuje bitowe obrazy wczytanych znaków.

#include <stdio.h>

int main() {
  char c;
  int x = 0;
  while ( (c = getchar()) != EOF ) {

    int mask = 0x80; /* 10000000 */

    while ( mask > 0) {
	     printf("%d", (c & mask) > 0 );
	      mask >>= 1;
    }
    x++;
    if( x == 2) {
      x = 0;
      printf("\n");
    }
  }
}
