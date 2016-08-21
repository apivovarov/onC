        /******************/
        /*  Table of      */
        /*  Sine Function */

#include <stdio.h>
#include <math.h>

int main(void) {

  printf("\nCompute a table of the sine function\n\n");

  double pi = acos(-1);

  printf(" PI: %1.10f\n", pi);

  printf("┌───┬───────────────┐\n");
  for (int angl = 0; angl <= 360; angl += 10) {
    double rad = pi * angl / 180;
    double s = sin(rad);

    printf("│%3d│%15.10f│\n", angl, s);
  }
  printf("└───┴───────────────┘\n");
}
