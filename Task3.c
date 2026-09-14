
#include <stdio.h>

int main()
{
    float length;
    printf("Please enter the length of the rectangle:\n");
    scanf("%f", &length);

    float width;
    printf("Please enter the width of the rectangle:\n");
    scanf("%f", &width);

    float area = (width * length);

    printf("the area of the rectangle is: %fcm", area);
}
