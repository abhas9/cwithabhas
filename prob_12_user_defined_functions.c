#include <stdio.h>
#define STUDENT_COUNT 10

void getFriendsCount(int likenessMatrix[STUDENT_COUNT][STUDENT_COUNT], int friendsCount[]) {
	int i;

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
}

int geIndexForMax(int arr[], int size) {
	int max = arr[0];
	int indexForMax = 0;
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
			indexForMax = i;
		}
	}
	return indexForMax;
}

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

    int friendsCount[STUDENT_COUNT];
    getFriendsCount(likenessMatrix, friendsCount);

    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("Roll number %d has %d friend(s)\n", i + 1, friendsCount[i]);
    }

    int rollNumberWithMaxFriends = geIndexForMax(friendsCount, STUDENT_COUNT) + 1;
    printf("Class representative (Roll with max frinds) is %d\n", rollNumberWithMaxFriends);

    return 0;
}

