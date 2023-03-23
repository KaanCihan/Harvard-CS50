#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startingPop;
    do
    {
       startingPop = get_int("Start size: ");
    }
    while (startingPop < 9);

    // TODO: Prompt for end size
    int endingPop;
    do
    {
        endingPop = get_int("End size: ");
    }
    while (endingPop < startingPop);

    // TODO: Calculate number of years until we reach threshold
    int clonePop = startingPop;
    int years = 0;
    while (clonePop < endingPop)
    {
        clonePop = clonePop + clonePop/3 - clonePop/4;
        years++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", years);
}
