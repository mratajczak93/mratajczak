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
if ((a>b) && (b>c)) {
  printf("%d, %d, %d\n",a,b,c );
} else if ((c<b) && (b<a)) {
  printf("%d, %d, %d\n",c,b,a );
} else if ((a<c) && (c<b)) {
  printf("%d, %d, %d\n",a,c,b );
} else if ((b<c) && (c<a)) {
  printf("%d, %d, %d\n",b,c,a );
} else if ((b<a) && (a<c)) {
  printf("%d, %d, %d\n",b,a,c );
} else if ((c<a) && (a<b)) {
  printf("%d, %d, %d\n",c,a,b );

  }
    return 0;
}
