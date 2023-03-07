#include <stdio.h>

int main(void)
{
    int height;

    // Get height from user
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    // Draw pyramid
    for (int i = 0; i < height; i++)
    {
        // Draw left pyramid
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // Draw gap
        printf("  ");

        // Draw right pyramid
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
