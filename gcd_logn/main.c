#include <stdio.h>


int doubleGivenValue(int, int);


int main(void) {
    int x, y;
    int counter = 0;

    printf("Enter numbers: ");
    scanf("%d %d", &x, &y);

    while(x != y) {
        if (!(x % 2) && !(y % 2)) {
            x /= 2;
            y /= 2;
            ++counter;
        }

        else if (!(x % 2) && (y % 2))
            x /= 2;

        else if ((x % 2) && !(y % 2))
            y /= 2;

        else {
            if (x < y) {
                int c = x;
                x = y;
                y = c;
            }

            x -= y;
        }
    }

    printf("GCD: %d\n", doubleGivenValue(x, counter));

    return 0;
}


int doubleGivenValue(int value, int count) {
    int result = value;

    while(count--)
        result *= 2;

    return result;
}
