#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


void isbn_cipher(char* n) {
  int counter = 0;
  int i = 9;
  int j = 10;
  int result = 0;
  while(counter <= 9) {
    int unit = n[i] - '0';
    result += (unit * j);
    i--; j--; counter++;
  }
  printf("result: %d\n", result);
  printf("cipher: %d\n", result % 11);
}


void isbn_check_c(char* n) {
  int result = 0;
  for(int i = 0, j = i + 1; i <= 8; i++, j++) {
    int pos = (n[i] - '0');
    printf("%d, ", pos);
    int aggregate = pos * j;
    result += aggregate;
  }
  printf("\nresult: %d\n", result);
}

int main() {
  isbn_cipher("1683473817");
}