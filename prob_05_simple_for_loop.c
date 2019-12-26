#include <stdio.h>
#define MAX_LIMIT 50 

int main(void) {
	char str[MAX_LIMIT]; 
	printf("Enter name of your crush:");
	// gets(str);
	fgets(str, MAX_LIMIT, stdin); 
	
	for (int i = 0; i < 101; i++) {
		printf("%d. %s\n", i + 1, str);
	}

    return 0;
}