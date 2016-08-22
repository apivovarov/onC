#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int arr_len(char *a) {
  printf("a: %s, len: %ld\n", a, strlen(a));
  return 0;
}

static void get_err(char** err) {
  *err = "Error1";
}

int main(void) {
  char *numStr = "445";
  char *end;
  long rr = 0;
  if (numStr[0] == '\0') printf("Empty str\n");
  else {
    long tmp = strtol(numStr, &end, 10);
    if (end[0] == '\0') rr = tmp;
    else printf("Parse err\n");
  }
  printf("rr: %ld, end: %s\n", rr, end);

  char arr[100] = "Hello1234567";
  arr_len(arr);
  char arr2[] = "Privet";
  char arr3[100];
  char *s1, *s3;

  s1 = "Bonj";

  printf("s1: %s, len: %ld, size: %ld\n", s1, strlen(s1), sizeof(s1));

  printf("%s\n", arr);
  int i = 0;
  while ((arr[i] = s1[i]) != '\0') {
    i++;
  }
  printf("%s\n", arr);

  s1 = arr;
  s3 = arr3;

  while ((*s3++ = *s1++) != '\0');

  printf("%s\n", arr3);

  char m1[100] = "Test";
  char m2[20];

  strcpy(m2, m1);

  printf("m1: %s, len: %ld, size: %ld\n", m1, strlen(m1), sizeof(m1));
  printf("m2: %s, len: %ld, size: %ld\n", m2, strlen(m2), sizeof(m2));

  char z1[] = "1234567890";
  char *z2  = "1234567890";

  printf("z1: %s, len: %ld, size: %ld\n", z1, strlen(z1), sizeof(z1));
  printf("z2: %s, len: %ld, size: %ld\n", z2, strlen(z2), sizeof(z2));

  char* pEnd;
  strtol("44f", &pEnd, 10);
  printf("pEnd: %s\n", pEnd);
}
