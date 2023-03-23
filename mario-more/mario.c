#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for height
    int height;
    do
    {
    height = get_int("Height: ");
    }
    while(height < 1);
    
    // TODO: Creating the pyramid
    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j <= height - i ; j++)
        {
            printf(" ");
        }

        for (int x = 0; x < i; x++)
        {
            printf("#");
        }

        printf("  ");

        for (int x = 0; x < i; x++)
        {
            printf("#");
        }
        printf("\n");
    }
}

