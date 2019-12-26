#include <stdio.h>
#define ALLOWED_AGE 21
#define OLD_AGE 75
int main(void) {
	// const int ALLOWED_AGE = 21;
    int age;

    printf("Kitne saal ke hoo? ");
    scanf("%d", &age);
    if (age < ALLOWED_AGE) {
    	printf("Allowed NAHI hai !!!\n");
    } else if (age >= OLD_AGE) {
    	printf("hmmm...\n");
    } else {
    	printf("Pee loo apni Zindgi\n");
    }

    return 0;
}