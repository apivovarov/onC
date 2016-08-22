#include <stdio.h>
#include <stdbool.h>

int main(int argc, char** argv) {
  int lCnt, wCnt, cCnt = 0;
  char c;
  bool nonW = false;
  while((c = getchar()) != EOF) {
    cCnt++;
    if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r') {
      if (nonW) {
        wCnt++;
        nonW = false;
      }
    } else {
      if (!nonW) nonW = true;
    }
    if (c == '\n') {
      lCnt++;
    }
  }
  printf("%8d%8d%8d\n", lCnt, wCnt, cCnt);
}
