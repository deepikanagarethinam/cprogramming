#include <stdio.h>

int main() {
    unsigned int num;
    int count_zeros = 0, count_ones = 0;

    printf("Enter a number: ");
    scanf("%u", &num);

    unsigned int temp = num;
    while (temp > 0) {
        if (temp & 1)
            count_ones++;
        else
            count_zeros++;
        temp >>= 1;
    }
    printf("Total number of 1s = %d\n", count_ones);
    printf("Total number of 0s = %d\n", count_zeros);

    return 0;
}
