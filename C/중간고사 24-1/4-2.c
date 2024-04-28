#include <stdio.h>

int main() {
	char a;
	int sum = 0;

	int cnt = 0;

	int f1 = -1, f2 = 0;

	int max = 0;
	
	while (1) {
		if (sum > 50) {
			printf("*\n");
			if (max < cnt) max = cnt;
			cnt = 0;
			break;
		}

		scanf("%c", &a);

		if (a == '*') {
			printf("*\n");
			if (max < cnt) max = cnt;
			cnt = 0;
			break;
		}

		if ('a' <= a && a <= 'z') {
			if (f1 == 1) {
				printf("*\n");
			}
			printf("%c", a - 'a' + 'A');
			cnt++;
			f1 = 0;
		}
		else if ('0' <= a && a <= '9') {
			sum += a - '0';

			if (f1 == 0) f1 = 1;
			if (max < cnt) max = cnt;
			cnt = 0;
		}
		else {
			if (f1 == 0) f1 = 1;
			if (max < cnt) max = cnt;
			cnt = 0;
		}
	}

	printf("%d\n%d", max, sum);
}