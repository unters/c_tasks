#include <stdio.h>


int main(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int counter     = 1;
    int lastRemain  = 1 % n;
    int cashRemain  = lastRemain;

    while (lastRemain != 0) {
        for (int i = 0; i < counter; ++i) {
            if (lastRemain < n)
                lastRemain *= 10;

            lastRemain %= n;
        }

        if (cashRemain == lastRemain) {
            printf("Period of decimal fraction 1 / %d is %d.\n", n, counter);
            return 0;
        }

        cashRemain = lastRemain;
        ++counter;
    }
    
    printf("Decimal fraction 1 / %d is finite.\n", n);
    return 0;
}
