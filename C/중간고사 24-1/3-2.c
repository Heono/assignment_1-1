#include <stdio.h>

int main() {
	int a;

	
	int t = 0;
	int exp = 0;
	int tot = 1;

	int max = -1;
	int maxA = -1;
	int min = -1;
	int minA = -1;

	int first = 0;
	int last = 0;

	while (1) {
		scanf("%d", &a);

		if (a <= 0) break;

		printf("%d ", a);

		t = a;

		for (int i = 2; i <= t; i++) {
			while (t % i == 0) {
				exp++;
				t /= i;
			}
			tot *= (exp + 1);
			exp = 0;
		}

		printf("%d\n", tot);

		if (a % 2 == 0) {
			if (max == -1 || max < tot) {
				max = tot;
				maxA = a;
			}
			else if (max == tot && maxA > a) {
				max = tot;
				maxA = a;
			}
		}
		if (a % 2 == 1) {
			if (min == -1 || min > tot) {
				min = tot;
				minA = a;
			}
			else if (min == tot && minA < a) {
				min = tot;
				minA = a;
			}
		}
		if (tot > 10) {
			if (first == 0) {
				first = a;
				last = a;
			}
			else last = a;
		}

		tot = 1;
	}

	printf("%d %d\n%d %d", maxA, minA, first, last);

	return 0;
}