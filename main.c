#include <stdio.h>

int main(int argc, char *argv[]) {
    int count = 0;
    int c;

    printf("input a string: ");

    while((c = getchar()) != '\n') {
        if(c >= '0' && c <= '9') {
            count++;
        }
    }
    
    printf("The number of digits is: %d\n", count);

    return 0;
}