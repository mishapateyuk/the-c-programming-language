#include <stdio.h>

main() {
  int from, to, step;
  float fahrenheit, celsius;
  char separator;

  separator = '|';
  from = 0;
  to = 300;
  step = 20;

  fahrenheit = from;

  printf("--------------------\n");
  printf("|   F   |    C     |\n");

  while (fahrenheit <= to) {
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("--------------------\n");
    printf("%c  %3.0f  %c  %6.2f  %c\n", separator, fahrenheit, separator, celsius, separator);

    fahrenheit = fahrenheit + step;

    if (fahrenheit > to) {
      printf("--------------------\n");
    }
  }
}
