
#include <stdio.h>

int main() {

    float obtained_marks;
    int total_marks;

    printf("Enter obtained marks: ");
    scanf("%f", &obtained_marks);

    printf("Enter total marks: ");
    scanf("%d", &total_marks);

    float percentage = (obtained_marks / total_marks) * 100.0;
    printf("Percentage: %f", percentage);

}





