#include <stdio.h>

int main(void) {
    long number;
    int digits;

    printf("Enter number: ");
    scanf("%ld", &number);

    do {
    	number /= 10;
    	digits++;
    } while(number != 0);
    
    printf("Digits %d\n", digits);
    return 0;
}