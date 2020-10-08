#include <stdio.h>

struct ant_year_end
{
    int year;
    int month;
};

int main()
{
    ant_year_end aye;
    printf("year: %d\n", aye.year);

    return 0;
}
