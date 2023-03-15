#include <stdio.h>

void main()
{

    int ndays, year, week, day;
    int daysinweek = 7;

    printf("Enter the number of days here:");
    scanf("%d", &ndays);

    year = ndays / 365;
    week = (ndays % 365) / daysinweek;
    day = (ndays % 365) % daysinweek;

    printf(" %d is eqivalent to %d year %d week %d days", ndays, year, week, day);
}