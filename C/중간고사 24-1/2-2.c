#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int mir = 0, t2 = 0;
	int max = 0;
	int sum = 0;

	for (int i = n; i <= m; i++) {
		mir = i;
		t2 = i;
		while (t2) {
			mir = mir * 10 + t2 % 10;
			t2 /= 10;
		}
		printf("%d ", mir);

		while (mir) {
			if (max < mir % 10) max = mir % 10;
			mir /= 10;
		}

		printf("%d\n", max);

		if (max % 2 == 0) sum += max;
		max = 0;
	}
	printf("%d", sum);

	return 0;
}