#include <stdio.h>

main() {
  int from, to, step;
  float fahrenheit, celsius;

  from = 0;
  to = 300;
  step = 20;

  fahrenheit = from;

  while (fahrenheit <= to) {
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("%.0f\t %.2f\n", fahrenheit, celsius);

    fahrenheit = fahrenheit + step;
  }
}
