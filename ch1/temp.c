#include <stdio.h>

// print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300

int main(void)
{
  // int fahr, celsius;
  // int lower, upper, step;

  // different data type
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; // lower limit of temp scale;
  upper = 300; // upper limit
  step = 20; // step size

  fahr = lower;

  // while (fahr <= upper) {
  //   celsius = 5 * (fahr - 32) / 9;
  //   printf("%d\t%d\n", fahr, celsius);
  //   fahr = fahr + step;
  // }

  // different formula
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
