#include <stdio.h>
#define MY_ROLL_NUMBER 10
int main(void) {
    int passingRolls[10] = {1, 3, 7, 2, 10, 4, 8, 9, 6, 11};

    int lengthOfArray = sizeof(passingRolls)/sizeof(passingRolls[0]), i;
    for (i = 0; i < lengthOfArray; i++) {
    	if (passingRolls[i] == MY_ROLL_NUMBER) {
    		printf("You have passed\n");
    		break;
    	}
    }

    if (i == 10) { // Loop was never breaked
    	printf("You failed\n");
    }

    return 0;
}