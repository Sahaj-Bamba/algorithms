/*C program to demonstrate an
insertion sort*/

#include <stdio.h>

int main(void){

int gamesWon, i, j, temp, count=0;

    printf("How many baseball teams would you like to enter stats for?: \n");
    scanf("%d", &gamesWon);

    int teams[gamesWon];

    printf("\nEnter each team's final number of games won for the 2019 regular season: \n");

    //Using a for loop to store numbers in an array
    for(i = 0; i < gamesWon; i++)
    {
        scanf("%d", &teams[i]);
	}

	for (i = 1; i < gamesWon; i++){

	    for(j = i; j > 0; j--){

	        if (teams[j - 1] > teams[j]){
	            temp = teams[j];
	            teams[j] = teams[j - 1];
	            teams[j - 1] = temp;

	        }

	    }
	}

    printf("The sorted list of winning games is: \n");

	for(i = 0; i < gamesWon; i++)
	{
	    printf("%d\n", teams[i]);
	}

    return 0;

}