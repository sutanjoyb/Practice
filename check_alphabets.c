#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[] = "Sjoy123";
    int count = 0;
    bool onlyAlphabets = true;

    for (int i = 0; str[i] != '\0'; i++) {
        count++;

        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
            onlyAlphabets = false;
            break;
        }
    }

    if (onlyAlphabets)
        printf("Only alphabets\n");
    else
        printf("Not only alphabets\n");

    return 0;
}