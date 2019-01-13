#include <stdio.h>

#define FROM 300
#define TO 0
#define STEP 20

main() {
  int fahrenheit, celsius;
  char separator;

  separator = '|';

  printf("--------------------\n");
  printf("|   C   |    F     |\n");

  for (celsius = FROM; celsius > TO; celsius -= STEP) {
    fahrenheit = (9.0 / 5.0 * celsius) + 32.0;
    printf("--------------------\n");
    printf("%c  %3d  %c  %6d  %c\n", separator, celsius, separator, fahrenheit, separator);

    if (celsius > TO) {
      printf("--------------------\n");
    }
  }
}
