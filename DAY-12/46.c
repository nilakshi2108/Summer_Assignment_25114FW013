#include <stdio.h>

int isArmstrong(int num) {
    int temp = num, sum = 0, rem;

    while (temp != 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if (sum == num)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}