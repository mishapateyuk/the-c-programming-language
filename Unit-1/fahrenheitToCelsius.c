#include <stdio.h>

main() {
  int from, to, step, fahrenheit, celsius;
  char separator;

  separator = '|';
  from = 0;
  to = 300;
  step = 20;

  celsius = from;

  printf("--------------------\n");
  printf("|   F   |    C     |\n");

  while (celsius <= to) {
    fahrenheit = (9.0 / 5.0 * celsius) + 32.0;
    printf("--------------------\n");
    printf("%c  %3d  %c  %6d  %c\n", separator, celsius, separator, fahrenheit, separator);

    celsius = celsius + step;

    if (celsius > to) {
      printf("--------------------\n");
    }
  }
}
