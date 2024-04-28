#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int a, b, c, d;

	double avg = 0;

	int f = 0;

	double max = 0;
	double min = 100;

	int babo = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);

		if (a < 0 || a > 100) {
			printf("Invalid\n");
			continue;
		}
		else if (b < 0 || b > 100) {
			printf("Invalid\n");
			continue;
		}
		else if (c < 0 || c > 100) {
			printf("Invalid\n");
			continue;
		}

		avg = (a + b + c) / 3.0;

		if (d < 12) {
			printf("FA ");
			printf("%.2f\n", avg);
			if ((a < 70 && b < 70) || (c < 70 && b < 70) || (a < 70 && c < 70)) {
				babo++;
			}
			continue;
		}
		else if (avg >= 90) {
			printf("A ");
		}
		else if (avg >= 80) {
			printf("B ");
		}
		else if (avg >= 70) {
			printf("C ");
		}
		else {
			printf("F ");
		}
		printf("%.2f\n", avg);

		if (min > avg) min = avg;
		if (max < avg) max = avg;

		if ((a < 70 && b < 70) || (c < 70 && b < 70) || (a < 70 && c < 70)) {
			babo++;
		}
	}

	printf("max=%.2f min=%.2f num=%d", max, min, babo);

	return 0;
}