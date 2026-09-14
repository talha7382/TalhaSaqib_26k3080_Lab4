
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("enter a number\n");
    scanf("%d", &num1);

    printf("enter another number\n");
    scanf("%d", &num2);

    printf("enter another number\n");
    scanf("%d", &num3);

    int average = ((num1 + num2 + num3) / 3.0);
    printf("the average is: %d", average);

    return 0;
}
