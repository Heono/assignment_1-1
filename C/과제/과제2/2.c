#include <stdio.h>

int main() {
    // 메뉴 설명
    // 피자 만오천원
    // 버거 오천원
    // 샐러드 사천오백원
    // 아이스크림 팔백원
    // 음료수 오백원
    // 안시킬 경우 0 입력

    // 메뉴번호 변수
    int a, b, c;
    // 총금액 변수
    int cost = 0;
    //입력 받기
    scanf("%d %d %d", &a, &b, &c);

    // 첫번째 메뉴 판별
    switch (a) {
        // 피자일 경우
        case 1:
            printf("Pizza\n");
            cost += 15000;
            break;
        // 버거일 경우
        case 2:
            printf("Burger\n");
            cost += 5000;
            break;
        // 샐러드일 경우
        case 3:
            printf("Salad\n");
            cost += 4500;
            break;
        // 아이스크림일 경우
        case 4:
            printf("Ice cream\n");
            cost += 800;
            break;
        // 음료수일 경우
        case 5:
            printf("Beverage\n");
            cost += 500;
            break;
        // 안시킬 경우
        case 0:
            printf("None\n");
            break;
    }

    // 두번째 메뉴 판별
    switch (b) {
        // 피자일 경우
        case 1:
            printf("Pizza\n");
            cost += 15000;
            break;
        // 버거일 경우
        case 2:
            printf("Burger\n");
            cost += 5000;
            break;
        // 샐러드일 경우
        case 3:
            printf("Salad\n");
            cost += 4500;
            break;
        // 아이스크림일 경우
        case 4:
            printf("Ice cream\n");
            cost += 800;
            break;
        // 음료수일 경우
        case 5:
            printf("Beverage\n");
            cost += 500;
            break;
        // 안시킬 경우
        case 0:
            printf("None\n");
            break;
    }

    // 세번째 메뉴 판별
    switch (c) {
        // 피자일 경우
        case 1:
            printf("Pizza\n");
            cost += 15000;
            break;
        // 버거일 경우
        case 2:
            printf("Burger\n");
            cost += 5000;
            break;
        // 샐러드일 경우
        case 3:
            printf("Salad\n");
            cost += 4500;
            break;
        // 아이스크림일 경우
        case 4:
            printf("Ice cream\n");
            cost += 800;
            break;
        // 음료수일 경우
        case 5:
            printf("Beverage\n");
            cost += 500;
            break;
        // 안시킬 경우
        case 0:
            printf("None\n");
            break;
    }

    printf("Total:%dwon", cost);

    return 0;
}