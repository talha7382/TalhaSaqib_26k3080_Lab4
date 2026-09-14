
#include <stdio.h>

int main()
{
    int late_days;
    printf("Enter the number of late days:\n");
    scanf("%d", &late_days);

    if (late_days == 0)
    {
        printf("No Fine");
    }
    else
    {
        if ((late_days >= 1) && (late_days <= 5))
        {
            printf("Your fine is Rs.10\n");
        }
        else if ((late_days >= 6) && (late_days <= 10))
        {
            printf("Your Fine is Rs.100");
        }
        else
        {
            printf("Your Fine is Rs.200");
        }
    }
}
