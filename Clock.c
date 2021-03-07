#include <stdio.h>
#include <windows.h>

int main()
{
    int hours, minutes, seconds;
    int delay = 1000;

    printf("\n -> Set time <- \n\n");

    printf("Hours: ");
    scanf("%d", &hours);

    printf("Minutes: ");
    scanf("%d", &minutes);

    printf("Seconds: ");
    scanf("%d", &seconds);

    if (hours > 23 || minutes > 59 || seconds > 59)
    {
        printf("ERROR!\n");
        exit(0);
    }
    
    while(1) //infinite loop
    {
        seconds++;
        if (seconds > 59) 
        {
            minutes++;
            seconds = 0;
        }
        if (minutes > 59) 
        {
            hours++;
            minutes = 0;
        }
        if (hours > 23) 
        {
            hours = 0;
        }

        if (hours <= 12) 
        {
            printf("\n  --------------------------------  ");
            printf("\n  |        %02d:%02d:%02d AM           | ", hours, minutes, seconds);
            printf("\n  --------------------------------  ");
        } 
        else 
        {
            printf("\n  --------------------------------  ");
            printf("\n  |        %02d:%02d:%02d PM           | ", hours, minutes, seconds);
            printf("\n  --------------------------------  ");    
        }
        

        Sleep(delay);
        system("cls"); //to clear the screen
    }

    return 0;
}