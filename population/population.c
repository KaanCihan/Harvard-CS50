#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    while
    int startingPop;
    do
    {
       startingpop = get_int("What is the starting population?");
    }
    while (startingPop < 9);

    // TODO: Prompt for end size
    int endingPop;
    do
    {
        endingPop = get_int("What is the ending population?");
    }
    while (endingPop < startingPop);

    // TODO: Calculate number of years until we reach threshold
    int clonePop = startingPop;
    int years;
    while (clonePop < endingPop)
    {
        clonePop = clonePop + clonePop/3 - clonePop/4
        years++;
    }
    // TODO: Print number of years
    printf("Years: %i", years)
}
