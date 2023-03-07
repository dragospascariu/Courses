#include <stdio.h>

int main(void)
{
    int start, end, years;

    // Prompt user for starting population size
    do
    {
        printf("Starting population size: ");
        scanf("%d", &start);
    }
    while (start < 9);

    // Prompt user for ending population size
    do
    {
        printf("Ending population size: ");
        scanf("%d", &end);
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

    return 0;
}
