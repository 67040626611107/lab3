#include <stdio.h>

int main() {
  int score;
  scanf("%d",&score);
  if (score >= 40) {
   printf("Pass");
  } else if (score > 29) {
   printf("You can Test again");
  } else {
   printf("False");
  }
 return (0);
}
