// Menu Driven String Program (Without <string.h>)

#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice, i, len;

    while(1) {
        printf("\n----- STRING OPERATIONS MENU -----\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {

        case 1:
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);

            len = 0;
            while(str1[len] != '\0' && str1[len] != '\n')
                len++;

            printf("Length of string = %d\n", len);
            break;

        case 2:
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);

            i = 0;
            while(str1[i] != '\0') {
                str2[i] = str1[i];
                i++;
            }
            str2[i] = '\0';

            printf("Copied string: %s", str2);
            break;

        case 3:
            printf("Enter first string: ");
            fgets(str1, sizeof(str1), stdin);

            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);

            i = 0;
            while(str1[i] != '\0' && str1[i] != '\n')
                i++;

            int j = 0;
            while(str2[j] != '\0') {
                str1[i++] = str2[j++];
            }
            str1[i] = '\0';

            printf("Concatenated string: %s", str1);
            break;

        case 4:
            printf("Enter first string: ");
            fgets(str1, sizeof(str1), stdin);

            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);

            i = 0;
            while(str1[i] == str2[i] && str1[i] != '\0')
                i++;

            if(str1[i] == str2[i])
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        case 5:
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);

            len = 0;
            while(str1[len] != '\0' && str1[len] != '\n')
                len++;

            printf("Reversed string: ");
            for(i = len - 1; i >= 0; i--)
                putchar(str1[i]);
            printf("\n");
            break;

        case 6:
            printf("Exiting program.\n");
            return 0;

        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
