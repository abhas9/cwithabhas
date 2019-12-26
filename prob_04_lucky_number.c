#include <stdio.h>
/*
	Pandit Ji's Logic: Luck number is always based on the last digit of your birth date (say n)
	Eg. if you were both on 15th of any month, n = 5

	Lucky numnber of individuals with n = 1, 3 & 7 is 1
	Lucky numnber of individuals with n = 0, 2 & 9 is 5
	For everyone else lucky number is 7
*/ 
int main(void) {
    int dob;

    printf("Enter birth date? ");
    scanf("%d", &dob);
    int n = dob % 10, luckyNumber;
    switch(dob) {
    	case 1:
    	case 3:
    	case 7: luckyNumber = 1; break;
    	case 0:
    	case 2:
    	case 9: luckyNumber = 5; break;
    	default: luckyNumber = 7;
    }

    printf("Your lucky number is %d\n", luckyNumber);

    return 0;
}