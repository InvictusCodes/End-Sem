WAP that copies the content of one text file into another .
Code:
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*fptr1,*fptr2;
    char filename[100];
    int c;
    printf("Enter the filename to open for reading:");
    scanf("%s",filename);
    fptr1=fopen(filename,"r");
    if(fptr1==NULL)
    {
        printf("Cannot open file %s \n",filename);
        return 0;
        exit(1);
    }
    printf("Enter the filename to open for writing :");
    scanf("%s",filename);
    fptr2=fopen(filename,"w");
    if(fptr2==NULL)
    {
        printf("Cannot open:%s\n",filename);
        exit(1);
    }
    while((c=fgetc(fptr1))!=EOF)
    {
        fputc(c,fptr2);
    }
    printf("Contents copied to %s\n",filename);
    fclose(fptr1);
    fclose(fptr2);
    
    return 0;

}
