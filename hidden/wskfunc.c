// wskaźniki do funkcji
int addInt (int n, int m) {
    return n+m;
}

int main () {
  int (*functionPtr) = &addInt;

  functionPtr = &addInt;

  int sum = (*functionPtr)(2, 3); //sum == 5;
  
}
