#include <stdio.h>

int main() {
  int x;
  int sum = 0;
  int wantContinue;
  printf("Czy kontynuować (1-tak/0-nie? \n");
  scanf("%d", &wantContinue);

  while (wantContinue == 1) {
    printf("Podaj liczbę :\n");
    scanf("%d", &x);
    sum = sum + x*x;
    printf("Czy kontynuować (1-tak/0-nie? \n");
    scanf("%d", &wantContinue);
  }
  printf("%d\n", sum);
  return 0;

  }
