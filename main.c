#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;

    printf("정수 하나를 입력하시오. : ");
    scanf("%d", &n);

    if (n > 0) {
        printf("양수입니다.\n");
    } else if (n < 0) {
        printf("음수입니다.\n");
    } else {
        printf("0입니다.\n");
    }

    return 0;
}