#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int position = -1;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            position = i + 1;
            break;
        }
    }

    if (position != -1)
        printf("Highest set bit is at position %d\n", position);
    else
        printf("No set bit found (number is 0)\n");

    return 0;
}
