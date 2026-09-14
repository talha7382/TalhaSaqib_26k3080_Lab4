
#include <stdio.h>


int main()
{
    float obtained_marks;
    printf("Hello! Please enter your marks.\n");
    scanf("%d", &obtained_marks);

    float marks = obtained_marks / 100.0;

    int fam_income;
    printf("Now enter your family's income:\nRs.");
    scanf("%d", &fam_income);

    if ((fam_income < 50000) || (marks >= 0.8))
    {
        printf("Congrats! You are eligible for the scholarship!");
    }
    else
    {
        printf("Unfortunately, you are ineligible for the scholarship.");
    }

    return 0;
}
