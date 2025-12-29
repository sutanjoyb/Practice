#include <stdio.h>

int main()
{
    int num1, num2, hcf;

    printf("Enter a numbers: \n");
    scanf("%d", &num1);
    printf("Enter another numbers: \n");
    scanf("%d", &num2);

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF (GCD) = %d\n", hcf);

    return 0;
}
