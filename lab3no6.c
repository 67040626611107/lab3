#include <stdio.h>

int main() {
  int score;
  scanf("%d",&score);
  if (score >= 68) {
    if (score >= 85) {
      printf("A");
    } else if (score >= 75 ) {
      printf("B");
    } else {
      printf("C\n");
      printf("You are close up to get b !! : %d", 75 - score);
    }
  } else {
    if (score >= 55) {
      printf("D");
    } else {
      printf("F");
    }
  }
  return (0);
}
