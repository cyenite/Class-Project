#include <stdio.h>
#include <stdlib.h>

int main()
{
    int startyear;
    int endyear;
    int year;
    int count=0;
    startyear=1000;
    year=1;
    //printf("\t\t\t\tBANK BALANCE\n");
    printf("Year\t\t\tAmount\(Beginning\)\t\t\tAmount\(End Year\)\n");
    while(count<10)
    {
        endyear=(startyear*0.8)+startyear;
        printf("%d\t\t\t$%d\t\t\t\t\t$%d\n\n",year,startyear,endyear);
        startyear=endyear;
        year++;
        count++;
    }
}
