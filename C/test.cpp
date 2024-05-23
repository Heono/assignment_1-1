#include <stdio.h>

// 1. 반환값 지정
int max(int x, int y);

int main() 
{
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d", max(x,y));
    return 0;
}

int max(int x, int y) 
{
    int maximum;
    if (x>y) maximum = x; 
    else maximum = y;
    return maximum;
} 