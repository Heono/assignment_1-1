#include <stdio.h>

int main()
{
    int N, n;

    scanf("%d", &N);
    int x[N], y[N];           // 정수 N개 입력받는 배열
    int arrmax[N], arrmin[N]; // 최대, 최소 저장 배열
    int max, min;             // 최대, 최소 저장용 변수 선언
    int k, t;

    // 정수 N개 입력받아 배열 x에 저장
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &n);
        x[i] = n;
        y[i] = n;
    }

    // 배열 역순 출력
    for (int i = N - 1; i >= 0; i--)
    {
        printf(" %d", x[i]);
    }

    printf("\n");

    while (N > 1)
    { // N이 0 될때까지 반복
        t = (N % 3 == 0) ? N / 3 : (N / 3) + 1;
        for (k = 0; k < t; k++)
        {
            max = x[3 * k];
            min = y[3 * k];
            for (int i = 3 * k; i < 3 * k + 3 && i < N; i++)
            {
                if (x[i] > max)
                    max = x[i];
                if (y[i] < min)
                    min = y[i];
            }

            // 최댓값, 최솟값 배열 저장
            arrmax[k] = max;
            arrmin[k] = min;
        }
        // 최댓값, 최솟값 배열 출력
        for (int i = 0; i < k; i++)
            printf(" %d", arrmax[i]);

        printf("\n");

        for (int i = 0; i < k; i++)
            printf(" %d", arrmin[i]);

        printf("\n");

        // N 나눠주고 다시 for문으로 돌아가 위의 작업 반복
        if (N % 3 == 0)
            N /= 3;
        else
            N = N / 3 + 1;

        for (int i = 0; i < N; i++)
        {
            x[i] = arrmax[i];
            y[i] = arrmin[i];
        }
    }
}
