#include <stdio.h>

int main() {

   int x = 7;
   int liczb[x];

   int min = 0;
   int max = 0;
   int suma = 0;
   double avg = 0;
   int ponad100 = 0;

   printf("podaj %d liczb\n", x);

   for (int i = 0; i < x; i++) {
       printf("%d: ", i+1);
       scanf("%d", &liczb[i]);

       if (min > liczb[i] || i == 0) {
          min = liczb[i];
       }

       if (max < liczb[i] || i == 0) {
           max = liczb[i];
       }

       suma = suma + liczb[i];

       if (liczb[i] > 100) {
           ponad100++;
       }
   };

    avg = (double) suma / x;
      printf("wynik \n");
      printf("najmniejsza: %d\n", min);
      printf("największa:  %d\n", max);
      printf("średnia:     %f\n", avg);
      printf("liczby >100: %d\n", ponad100);

   return 0;
}
