WAP to display information of 10 students using 10 students using array of Structure.
Code:
#include<stdio.h>
#include<string.h>
struct Student
{
    int rollno;
    char name[30];
    float percent;
}stud[100];

int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter the details of Students below:\n");
        printf("Enter the Roll no:");
        scanf("%d",&stud[i].rollno);
        printf("Enter the Name of Student:");
        scanf("%s",stud[i].name);
        printf("Enter Percentage of student:");
        scanf("%f",&stud[i].percent);
    }
    printf("\nDetails of Students are as Follows:");
    printf("\nRoll no\t Name\t Percentage");
    for(i=0;i<10;i++)
    {
        printf("\n%d\t %s\t %.2f",stud[i].rollno,stud[i].name,stud[i].percent);
    }
    return 0;
}
