#include <stdio.h>
int main(){
    long long num, temp;
    
    printf("Enter an Integer: ");
    scanf("%lld", &num);

    for (int digit= 0; digit <= 9; digit++){
        int count = 0;
        temp = num;

        while (temp != 0){
            if (temp % 10 == digit)
            {
                count++;
            }
            temp = temp / 10;
        }
        if (count > 0)
        {
            printf("Frequency of %d = %d\n", digit, count);
        }
    }
    return 0;
}