#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for height
    int height = get_init("Height: ");

    // TODO: Creating the pyramid
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= height - i ; j++)
        {
            printf(" ");
        }

        for (int x = 0; x < height - j; x++)
        {
            printf("#");
        }
    }
}