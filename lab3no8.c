#include <stdio.h>
int Hour,Minute,Second;
int H,M,S;

int Min() {
  if (M > 59) {
    Hour += 1;
    M -= 60;
  }
  if (M > 59) {
    Min();
  }
  return (0);
}
int Seconds() {
  if (S > 59) {
    Minute += 1;
    S -= 60;
  }
  if (S > 59) {
    Seconds();
  }
  return (0);
}
int main() {
  printf("Hour : ");
  scanf("%d",&H);
  printf("Minute : ");
  scanf("%d",&M);
  printf("second : ");
  scanf("%d",&S);
  Seconds();
  Second += S;
  Min();
  Minute += M;
  if (H > 23) {
    H = 0;
  }
  Hour += H;
  printf("Hour %d : Minute %d : Second : %d ",Hour,Minute,Second);
  return (0);
}
