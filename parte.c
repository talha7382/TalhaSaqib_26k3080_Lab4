
#include <stdio.h>

int main() {
    float obtained_marks;

    printf("Enter your obtained marks: ");
    scanf("%f", &obtained_marks);

    if (obtained_marks >= 80) {
        printf("You obtained a A grade!");
    }
    else if (obtained_marks >= 60)
    {
        printf("You obtained a B grade!");
    }
    else 
    {
        printf("You obtained C grade!");
    }
}











