WAP to display information of player in ascending order with respect to their batting average.Define structure called cricket that will describe the players's name ,
country name,best score, batting average.
Code:
#include <stdio.h>
#include <string.h>

struct Cricket 
{
    char name[30];
    char country[30];
    float avg;
    int best;
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
        scanf("%s",crick[i].country);

        printf("Enter the Best Batting Score of player: ");
        scanf("%d", &crick[i].best);

        printf("Batting Average: ");
        scanf("%f", &crick[i].avg);
    }

    // Sort ascending by average//
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(crick[i].avg > crick[j].avg)
            {
                temp = crick[i];
                crick[i] = crick[j];
                crick[j] = temp;
            }
        }
    }

    printf("\nDetails of Players sorted by Batting Average (Ascending Order):\n");
    printf("Name\tTeam\tBest Score\tAverage\n");

    for(i = 0; i < n; i++) {
        printf("%s\t%s\t\t%d\t\t%.2f\n",crick[i].name, crick[i].country, crick[i].best, crick[i].avg);
    }
    return 0;
}
