// Check String Palindrome

#include <stdio.h>
#include <string.h>
int main(){
    char str[100], len, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    for (int i = 0; i < len / 2; i++){
        if (str[i] != str[len - 1 - i]){
            flag = 0;
            break;
        }
    }

    if (flag)
        printf ("The String is Palindrome!");
    else
        printf ("The String is not Palindrome!");

    return 0;
}