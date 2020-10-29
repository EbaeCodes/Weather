#include <stdio.h>
#include <stdlib.h>

//Constants declaration
#define YEARS 5
#define MONTHS 12

int main()
{
    // 2D arrays
    // First we display yearly average rainfall
    //intializing rainfall

    float rain[YEARS][MONTHS] =
    {
      {2.4,4.6,7.8,9.5,3.5,8.8,2.3,6.9,0.7,1.4,5.0,6.3},
      {4.4,3.6,5.8,2.5,3.5,6.8,6.3,6.9,4.7,3.4,9.0,8.3},
      {3.4,7.6,9.8,6.5,3.5,2.8,2.9,8.9,5.7,8.4,7.0,7.3},
      {8.4,4.6,3.8,9.5,3.5,1.8,5.3,5.9,1.7,0.4,4.0,4.3},
      {9.4,0.6,6.8,5.5,3.5,8.9,2.7,9.6,0.8,3.6,2.0,2.3},
    };

    int year;
    int month;
    float subtotal;
    float total;

    printf("YEAR \t\t RAINFALL(inches) \n");



    //This first loop goes through the columns that is the years
    for (year = 0, total= 0; year < YEARS;  year++)
    {
       //this loop goes through the rows that is the months
       for(month = 0, subtotal = 0; month < MONTHS ; month++)
       {
           // as the inner loop goes through the months
           // the subtotal stores the sum of all the values of each months in a year
           subtotal += rain[year][month];
       }

       printf("%5d \t\t %15.1f\n", 2010 + year,subtotal);
       total +=  subtotal;
    }
    printf("\n The yearly average is %.1f inches.\n\n ",total/YEARS);
    printf("MONTHLY AVERAGE:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov   Dec  \n");

    // we go through the rows first and then columns
    for (month = 0; month < MONTHS; month++)
    {
        for(year = 0, subtotal = 0; year < YEARS ; year++)
        {
         subtotal += rain[year][month];
        }

         printf("%4.1f ", subtotal/YEARS);
     }

    return 0;
}
