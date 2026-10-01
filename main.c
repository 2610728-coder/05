#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;

    printf("정수 하나를 입력하시오. : ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    printf("절댓값은 %d입니다.\n", n);

    return 0;
}