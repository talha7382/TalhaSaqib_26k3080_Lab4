
#include <stdio.h>

int main()
{
    int marks;
    printf("What are your marks?\n");
    scanf("%d", &marks);

    if (marks < 50)
    {
        printf("Fail");
    }
    else
    {
        printf("Pass");
    }
}
