#include <stdio.h>

int main() {
  int x;
  scanf("%d",&x);
  printf("%d\n",x);
  if (x%2==0 && x%3==0 && x%5==0) {
    printf("dzieli się przez 2,3 i 5\n");
  } else if (x%2==0 && x%3==0) {
    printf("dzieli się przez 2,3\n");
  } else if (x%2==0 && x%5==0) {
    printf("dzieli się przez 2,5\n");
  } else if (x%3==0 && x%5==0) {
    printf("dzieli się przez 3,5\n");
  } else if (x%2==0) {
    printf("dzieli się przez 2\n");
  } else if (x%3==0) {
    printf("dzieli się przez 3\n");
  } else if (x%5==0) {
    printf("dzieli się przez 5\n");
  } else {
    printf("nie dzieli się przez 2,3 i 5\n");
  }

  return 0;
  }
