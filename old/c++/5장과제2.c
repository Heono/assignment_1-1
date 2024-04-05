#include <stdio.h> // 헤더 파일 갖고 오기

int main() { // 메인 함수
    int a, b, c, cost = 0; // 에이 비 씨는 입력 받을 값을 저장하는 변수, 코스트는 총 가격을 저장할 변수
    scanf("%d %d %d", &a, &b, &c); // 입력 받기

    switch (a) { // 조건문
        case 0: // 케이스 0
            printf("None"); // 출력
            break;
        case 1: // 케이스 1
            cost += 15000; // 피자 값 추가
            printf("Pizza\n"); // 출력
            break;
        case 2: // 케이스 2
            cost += 5000;  // 버거 값 추가
            printf("Burger\n"); // 출력
            break;
        case 3: // 케이스 3 
            cost += 4500; // 셀러드 값 추가
            printf("Salad\n"); // 출력
            break;
        case 4: // 케이스 4
            cost += 800; // 아이스크림 값 추가
            printf("Ice cream\n"); // 출력
            break;
        case 5: // 케이스 5
            cost += 500; // 음료 값 추가
            printf("Beverage\n"); // 출력
            break;
        default:
            break;
    }

    switch (b) { // 조건문
        case 0: // 케이스 0
            printf("None"); // 출력
            break;
        case 1: // 케이스 1
            cost += 15000; // 피자 값 추가
            printf("Pizza\n"); // 출력
            break;
        case 2: // 케이스 2
            cost += 5000;  // 버거 값 추가
            printf("Burger\n"); // 출력
            break;
        case 3: // 케이스 3 
            cost += 4500; // 셀러드 값 추가
            printf("Salad\n"); // 출력
            break;
        case 4: // 케이스 4
            cost += 800; // 아이스크림 값 추가
            printf("Ice cream\n"); // 출력
            break;
        case 5: // 케이스 5
            cost += 500; // 음료 값 추가
            printf("Beverage\n"); // 출력
            break;
        default:
            break;
    }

    switch (c) { // 조건문
        case 0: // 케이스 0
            printf("None"); // 출력
            break;
        case 1: // 케이스 1
            cost += 15000; // 피자 값 추가
            printf("Pizza\n"); // 출력
            break;
        case 2: // 케이스 2
            cost += 5000;  // 버거 값 추가
            printf("Burger\n"); // 출력
            break;
        case 3: // 케이스 3 
            cost += 4500; // 셀러드 값 추가
            printf("Salad\n"); // 출력
            break;
        case 4: // 케이스 4
            cost += 800; // 아이스크림 값 추가
            printf("Ice cream\n"); // 출력
            break;
        case 5: // 케이스 5
            cost += 500; // 음료 값 추가
            printf("Beverage\n"); // 출력
            break;
        default:
            break;
    }
    // 총합 출력
    printf("Total:%dwon", cost);
}