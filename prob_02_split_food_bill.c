#include <stdio.h>
int main(void) {
    float totalBill;
    int mySamosaCount, friendSamosaCount;

    printf("How many 'Samosa's you ate? ");
    scanf("%d", &mySamosaCount);
    printf("How many 'Samosa's your friend ate? ");
    scanf("%d", &friendSamosaCount);

    printf("What was the total bill? ");
    scanf("%f", &totalBill);

    int totalSamosaCount = mySamosaCount+friendSamosaCount;
    float myBill = totalBill/totalSamosaCount * mySamosaCount;
    float friendBill = totalBill/totalSamosaCount * friendSamosaCount;

    printf("You should pay INR %.2f\nYour friend should pay INR %.2f\n", myBill, friendBill);

    return 0;
}