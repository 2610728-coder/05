#include <stdio.h>

int main(void) {
    int answer = 32;
    int input;
    int trial = 0;

    do {
        printf("guess a number: ");
        scanf("%i", &input);

        if (input < answer) {
            printf("low!\n");
        } else if (input > answer) {
            printf("high!\n");
        }

        trial++;
    } while (input != answer);
    printf("congratulations! trial: %i\n", trial);

    return 0;
}