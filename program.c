#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);
  int b;
  scanf("%d",&b);
  int c;
  scanf("%d",&c);
    double wynik = (a*b)-(b/(double)c);
    int wynik2 = (a*b)-(b%c);
    int wynik3 = (a*b)-(c*a)-(b*c);
printf ("%f\n",wynik);
printf ("%d\n",wynik2);
printf ("%d\n",wynik3);
return 0;
}
