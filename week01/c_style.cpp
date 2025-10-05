#include <cstdio>

int main () {
    int numerator;
    int divider;

    printf("Въведете първото число:");
    scanf("%d", &numerator);

    printf("Въведете второто число:");
    scanf("%d", &divider);

    int result = numerator / divider;

    printf("%d", result);

    printf("\n");

    double result_not_int = double(numerator) / divider;

    printf("%f", result_not_int);
}