#include <stdio.h>

int main() {
	int n;

	int t = 0;

	int p1, p2;

	int x, y;

	int min = -1;

	int t1, t2;

	scanf("%d", &n);

	for (int i = 2; i < n / 2; i++) {
		p1 = i;
		p2 = n - i;

		for (x = 2; x < p1; x++) {
			if (p1 % x == 0) break;
		}

		for (y = 2; y < p2; y++) {
			if (p2 % y == 0) break;
		}

		if (p1 == x && p2 == y) {
			if (min == -1 || min > p2 - p1) {
				min = p2 - p1;
				t1 = p1;
				t2 = p2;
			}
		}
	}

	printf("%d + %d = %d", t1, t2, t1 + t2);

	return 0;
}