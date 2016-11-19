#include <stdio.h>
#include <stdlib.h>

int main() {

	int n = 7;
	int numbers[n];

	int smallest = 0;
	int biggest = 0;
	int sum = 0;
	double average = 0;
	int greaterThan100 = 0;

	printf("Podaj %d liczb\n", smallest);

	for (int i = 0; i < n; i++) {
		printf("Liczba %d: ", i+1);
		scanf("%d", &numbers[i]);

		// szukaj najmniejszej
		if (smallest > numbers[i] || i == 0) {
			smallest = numbers[i];
		}

		// szuka największej
		if (biggest < numbers[i] || i == 0) {
			biggest = numbers[i];
		}

		// sumuje
		sum = sum + numbers[i];

		// liczba większa niż 100
		if (numbers[i] > 100) {
			greaterThan100++;
		}
	};

	average = (double) sum / n;

	printf("a) Najmniejsza liczba to: %d\n", smallest);
	printf("b) Największa liczba to: %d\n", biggest);
	printf("c) Śr. arytmetyczna z liczb to: %2.2f\n", average);
	printf("d) Ilość liczb większych niż 100: %d\n", greaterThan100);

	return 0;
}
