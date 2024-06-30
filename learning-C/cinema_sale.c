#include <stdio.h>
#include <stdlib.h>

void clearScreen() 
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main()
{   
    int ticketCouple = 50;
    int person1, person2;
    printf("-------------------------------------\n\n");
    printf("Wellcome to Couples Cinema!\n\n");
    printf("Input the couple age: ");
    scanf("%d %d", &person1, &person2);
    printf("\n\n-------------------------------------\n\n");
    clearScreen();
    if (person1 % 2 == 0 && person2 % 2 == 0) {
        printf("--------------------------------------\n\n");
        printf("The Ticket Couple price is %d\n", ticketCouple / 2);
        printf("Discont applied: 50%% off\n");
        printf("Have fun!\n\n");
        printf("--------------------------------------\n\n");
    } else {
        printf("--------------------------------------\n\n");
        printf("The Ticket Couple price is %d\n", ticketCouple);
        printf("Discont applied: 0%% off\n");
        printf("Have fun!\n\n");
        printf("--------------------------------------\n\n");
    }
    return 0;
}
