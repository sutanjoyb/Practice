#include <stdio.h>

int main()
{
    int base, exponent;
    long long result = 1;

    printf("Enter base: \n");
    scanf("%d", &base);
    printf("Enter exponent: \n");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    printf("Result = %lld\n", result);

    return 0;
}
