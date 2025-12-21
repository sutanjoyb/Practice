#include <stdio.h>
int main(){
        int sub1, sub2, sub3, sub4, sub5;
        int total;
        float percentage;
        int requiredMarks;

        printf("Welcome to Student Grading Marking System\n");

        printf("Enter the marks of English: \n");
        scanf("%d", &sub1);
        printf("Enter the marks of Mathematics: \n");
        scanf("%d", &sub2);
        printf("Enter the marks of Physics: \n");
        scanf("%d", &sub3);
        printf("Enter the marks of Chemistry: \n");
        scanf("%d", &sub4);
        printf("Enter the marks of Computer Science: \n");
        scanf("%d", &sub1);

        total = sub1 + sub2 + sub3 + sub4 + sub5;
        printf("Your total marks is: %d / 500\n", total);
        percentage = (total / 500) * 100;
        printf("You obtained: %.2f%%\n", percentage);

return 0;
}
