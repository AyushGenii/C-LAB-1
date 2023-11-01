#include <stdio.h>

int main() {
    
    float physics, chemistry, maths, biology, computer;
    float total_marks, percentage;

   
    printf("Enter Physics marks: ");
    scanf("%f", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chemistry);

    printf("Enter Mathematics marks: ");
    scanf("%f", &maths);

    printf("Enter Biology marks: ");
    scanf("%f", &biology);

    printf("Enter Computer marks: ");
    scanf("%f", &computer);

    
    total_marks = physics + chemistry + maths + biology + computer;

    
    percentage = (total_marks / 500.0) * 100.0;

    
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    
    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else if (percentage >= 40) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}

