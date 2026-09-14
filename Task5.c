
#include <stdio.h>

int main()
{
    int celsius;
    printf("Please enter temperature in celsius to convert to farrenheit.\n");
    scanf("%d", &celsius);

    float farrenheit = ((celsius * (9 / 5.0)) + 32);
    printf("temperature in farrenheight is %fF", farrenheit);

    return 0;
}
