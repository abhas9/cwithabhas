#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(void) {
	const int upper = 10;
	const int lower = 0;
    int jaan = 100, punchCount = 0;

    srand(time(NULL));
    
    while (jaan > 0) {
    	int range = upper - lower;
    	int punchPower = rand() % (range + 1) + lower;
    	jaan -= punchPower;
    	printf("Punch power %d || Remaining Jann %d\n", punchPower, jaan);
    	punchCount++;
    }

    printf("Dead after %d punches\n", punchCount);

    return 0;
}