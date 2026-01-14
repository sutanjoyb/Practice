#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 17;
    int size = 4;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: %d and %d\n", i, j);
                return 0;
            }
        }
    }

    printf("No two numbers add up to the target.\n");
    return 0;
}