#include <stdio.h>

int main() {
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter bit position to toggle : ");
    scanf("%d", &n);

    num = num ^ (1 << (n - 1)); 
    printf("Result after toggling %d-th bit: %d\n", n, num);
    return 0;
}
