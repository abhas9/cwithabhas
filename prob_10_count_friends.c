#include <stdio.h>
#define STUDENT_COUNT 10
int main(void) {
    int likenessMatrix[STUDENT_COUNT][STUDENT_COUNT] = {
    							{ 1, 1, 1, 1, 1, 0, 1, 0, 0, 1 },
                                { 1, 1, 0, 0, 0, 1, 0, 0, 0, 1 },
                                { 1, 0, 1, 1, 0, 1, 0, 1, 0, 1 },
                                { 1, 1, 0, 1, 0, 0, 1, 0, 1, 0 },
                                { 0, 0, 0, 1, 1, 0, 0, 1, 0, 0 },
                                { 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 },
                                { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1 },
                                { 1, 0, 0, 0, 0, 0, 1, 1, 1, 0 },
                                { 0, 1, 1, 0, 0, 1, 0, 1, 1, 1 },
                                { 0, 0, 0, 0, 0, 0, 1, 1, 0, 1 },
							};

    int friendsCount[STUDENT_COUNT], i;

    for (i = 0; i < STUDENT_COUNT; i++) {
        friendsCount[i] = 0;
    }
    
    for (i = 0; i < STUDENT_COUNT; i++) {
        for (int j = 0; j < STUDENT_COUNT; j++) {
            if (likenessMatrix[i][j] == 1 && likenessMatrix[j][i] == 1) {
                friendsCount[i]++;
            }
        }
    }

    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("Roll number %d has %d friend(s)\n", i + 1, friendsCount[i]);
    }

    return 0;
}