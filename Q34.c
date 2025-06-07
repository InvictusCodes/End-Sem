Define a structure called Player with data members: Player name, Player team, batting average. 
Create array of objects ,store information about players,sort and display information of players in descending order of batting average.
Code:
#include <stdio.h>
#include <string.h>

struct Cricket 
{
    char name[30];
    char team[30];
    float avg;
} crick[100], temp;

int main()
 {
    int i, j, n;

    printf("Enter number of players: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter information of Player %d:\n", i + 1);

        printf("Enter player name: ");
        scanf("%s",crick[i].name);

        printf("Enter player team: ");
        scanf("%s",crick[i].team);

        printf("Batting Average: ");
        scanf("%f", &crick[i].avg);
    }

    // Sort descending by average//
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(crick[i].avg < crick[j].avg)
            {
                temp = crick[i];
                crick[i] = crick[j];
                crick[j] = temp;
            }
        }
    }

    printf("\nDetails of Players sorted by Batting Average (Descending Order):\n");
    printf("Name\tTeam\tAverage\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\t%s\t%.2f\n",crick[i].name, crick[i].team, crick[i].avg);
    }
    return 0;
}
