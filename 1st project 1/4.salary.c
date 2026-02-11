#include <stdio.h>

int main()
{
    float base = 100;
    float hra = 10;
    float da  = 5;
    float ta  = 8;
    float gross;

    gross = base +
            (base * hra / 100) +
            (base * da / 100) +
            (base * ta / 100);

    printf("Base Salary = %.2f\n", base);
    printf("Gross Salary = %.2f", gross);

    return 0;
}