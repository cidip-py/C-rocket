#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
This is a prototype of the final idea lol.
*/

/*
my idea is: They need all that variables correct to launch the rocket...
*/


void launchRocket()
{
printf("The rocket will take off in... ");
printf("10");
printf("...");
printf("9");
printf("...");
printf("Ignition sequence starts in...");
printf("5");
printf("...");
printf("4");
printf("...");
printf("3");
printf("...");
printf("2");
printf("...");
printf("1");
    }



void prepLaunchRocket()
{
    float coord = 5.331;
    float moon_coord = 8.4300;
    int trip;
    double o2 = 53.31000;
    double o2_quant = 1.69000;
    float numo22;


    while( coord >= 5.000 )
    {
    printf("your coordenate is %f, and you need to corroborate if all the trip is inside the ship\n\n", coord);
    printf("1 is for True, and 0 to False:\n");
    scanf(" %d", &trip);
    

    if (trip == 1)
    {
    printf("\nPlease enter the amount needed to fill the tank: \n The current oxigen is: \n %f\n", o2);
    scanf("%d", &numo22);
    if ( numo22 == o2_quant)
    {
    printf("The tank is full...");
        }
    else
    {
    printf("PLEASE ENTER THE AMOUNT NEEDED TO FILL THE TANK: \n THE CURRENT OXIGEN IS %f\n", o2);
    scanf("%d", numo22);
        if (numo22 != o2_quant)
        {
    printf("\nThe oxigen tank explode ");
        }
      }
    }
    else if (trip == 0) 
    {
    printf("PLEASE CHECK IF IS ALL THE TRIP\nPLEASE CHECK IF IS ALL THE TRIP");
        }


        }

    if (coord >= 5.000 && trip == 1 && numo22 == o2_quant /*&& coord == moon_coord*/ )
    {
    launchRocket();
        }
    }


int main()
{
prepLaunchRocket();
    }
