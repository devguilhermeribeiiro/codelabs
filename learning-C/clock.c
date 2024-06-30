#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <time.h>


int main() {
    
    time_t currentTime;
    time(&currentTime);


    struct tm *localTime = localtime(&currentTime);

    printf("Data e hora atual: %s", asctime(localTime));

    if (localTime -> tm_hour < 12) {
       
        printf("Tenha um bom dia\n");

    } else if (localTime -> tm_hour < 18) {

        printf("Tenha uma boa tarde!\n");

    } else {

        printf("Tenha uma boa noite!\n");
    }
    return 0;
}
