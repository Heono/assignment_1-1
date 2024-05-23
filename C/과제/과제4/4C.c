#include <stdio.h>

int main()
{
	int n, a[20], b[20];
	int i;
	int cnt = 0;
	int max, min;
	int max_a[20], min_a[20];
	int flag = 0; // 0 - max, 1 - min
	// step 1
	scanf("%d", &n);
	for (i=0;i<n;i++) scanf("%d", &a[i]);
	for (i=n-1;i>=0;i--) printf(" %d", a[i]);

	for (i=0;i<n; i++)
		b[i] = a[i]; // copy for min check

	// step 3
	while (1)
	{
		for (i=0;i<n;i+=3)
		{
			max = a[i];
			min = b[i];
            
            // 3개보다 큰 수로 나누면 내가 한 방식이 더 나을듯
			if (i+2 < n)
			{
				if (a[i+1] > max) max = a[i+1];
				if (a[i+2] > max) max = a[i+2];
				if (b[i+1] < min) min = b[i+1];
				if (b[i+2] < min) min = b[i+2];
			}	
			else if (i + 1 < n) 
			{
				if (a[i+1] > max) max = a[i+1];
				if (b[i+1] < min) min = b[i+1];
			}

			max_a[cnt] = max;
			min_a[cnt] = min;
			cnt++;		

		}
		printf("\n");
		for (i=0;i<cnt;i++)
		{
			printf(" %d", max_a[i]);
		}
		printf("\n");
		for (i=0;i<cnt;i++)
		{
			printf(" %d", min_a[i]);
		}
		n = cnt;
		for (i=0;i<n;i++)
		{
			a[i] = max_a[i];
			b[i] = min_a[i];
		}
		if (cnt == 1)  break;
		cnt = 0;
	}

}