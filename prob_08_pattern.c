/*
n = 6
.....*
....***
...*****
..*******
.*********
***********

Total rows = n
In row r, number of spaces = n - r
Number of * in row r = (2 * r) - 1
*/

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid number of rows\n");
        return 1;
    }

    for (int r = 1; r <= n; r++) {
    	for(int s = 1; s <= (n - r); s++) {
    		printf(" ");
    	}

    	for (int i = 1; i <= (2 * r) - 1; i++) {
    		printf("*");
    	}
        printf("\n");
    }

    return 0;
}