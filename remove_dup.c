#include <stdio.h>
int main(){
    char str[] = "programming";
    int freq[256] = {0};
    for (int i = 0; str[i]; i++)
        if (freq[str[i]] == 0){
            printf("%c", str[i]);
            freq[str[i]] = 1;
        }
        return 0;
    }