 // Get Lowest Set Bit
 #include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int lowestSetBit = num & (-num);  
    printf("Lowest set bit value: %d\n", lowestSetBit);

    return 0;
}
