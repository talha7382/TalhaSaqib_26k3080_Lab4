
#include <stdio.h>
int main()
{
    int num;
    printf("Please enter a number:\n");
    scanf("%d", &num);

    int square = (num * num);
    int cube = (num * num * num);

    printf("The square of your number is %d and the cube is %d", square, cube);

    return 0;
}
