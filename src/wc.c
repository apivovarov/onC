#include <stdio.h>

int main(int argc, char** argv) {
  int lCnt, wCnt, cCnt = 0;
  char c;
  short nonW = 0;
  while((c = getchar()) != EOF) {
    cCnt++;
    if (c == ' ' || c == '\n') {
      if (nonW == 1) wCnt++;
      nonW = 0;
    } else {
      nonW = 1;
    }
    if (c == '\n') {
      lCnt++;
    }
  }
  printf("%8d%8d%8d\n", lCnt, wCnt, cCnt);
}
