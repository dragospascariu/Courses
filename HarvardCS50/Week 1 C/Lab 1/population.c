#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start, end, years;

    // Prompt user for starting population size
    do
    {
        start = get_int("Starting population size: ");
    }
    while (start < 9);

    // Prompt user for ending population size
    do
    {
        end = get_int("Ending population size: ");
    }
    while (end < start);

    // Calculate number of years required for population to reach end size
    int population = start;
    years = 0;
    while (population < end)
    {
        int born = population / 3;
        int dead = population / 4;
        population = population + born - dead;
        years++;
    }

    // Print number of years required
    printf("Years: %d\n", years);
}
