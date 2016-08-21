#include <stdio.h>

int main(void) {
  float x, y;
  float *fp, *fp2;

  x = 6.5;

  printf("x: %.2f addrx %ld\n", x, (long) &x);

  fp = &x;

  printf("fp val %.2f\n", *fp);

  *fp = 9.2;
  printf("fp val %.2f\n", *fp);
  printf("x: %.2f addrx %ld\n", x, (long) &x);

  *fp += 1.5;

  printf("fp val %.2f\n", *fp);
  printf("x: %.2f addrx %ld\n", x, (long) &x);

  y = x;
  fp2 = fp;
  printf("fp2 %ld, val %.2f\n", (long) fp2, *fp2);
  printf("y: %.2f addry %ld\n", y, (long) &y);

  *fp2 = 55;
  printf("fp %ld, val %.2f\n", (long) fp, *fp);
  printf("fp2 %ld, val %.2f\n", (long) fp2, *fp2);
  printf("x: %.2f addrx %ld\n", x, (long) &x);

  float z = *fp2;
  printf("z: %.2f addrz %ld\n", z, (long) &z);
}
