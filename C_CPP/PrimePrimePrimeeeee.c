#include <stdio.h>
#include <math.h>

int main() {
    int input, startNumber = 2, startArray = 0;
    int factors[1000];

    scanf("%d", &input); //Take input



    int number = input;
    int sqrtNumber = (int)sqrt(number);
    for (int i = startNumber; i <= sqrtNumber ; i++) {
        while ((number % i) == 0) {
            factors[startArray] = i;
            startArray++;
            number = number / i;
        }
    }

    if (number > 1)
    {
        factors[startArray] = number;
        startArray++;
    }

    printf("%d = ", input);
    int exponent = 1;
    for (int i = 0; i < startArray; i++) {
        exponent = 1;
        while (i < startArray - 1 && factors[i] == factors[i + 1]) {
            exponent++;
            i++;
        }
        if (exponent == 1)
            if (i != startArray - 1)
                printf("%d x ", factors[i]);
            else
                printf("%d", factors[i]);
        else {
            if (i != startArray - 1)
                printf("%d^%d x ", factors[i], exponent);
            else
                printf("%d^%d", factors[i], exponent);
        }
    }

}