#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*nc == nivel de consumo*/
#define nc1 7
#define nc2 20
#define nc3 140
#define nc4 100


int main() {
    
    float waterBill = 0;
    int waterConsumption;
    printf("What was your consumption level?(m³̣̣): ");
    scanf("%d", &waterConsumption);
    
    if (waterConsumption <= 10) {
        waterBill = nc1;
    } else if (waterConsumption <= 30){
        waterBill = nc1 + nc2;
    } else if (waterConsumption <= 100){
        waterBill = nc1 + nc2 + nc3;
    } else {
        waterBill = nc1 + nc2 + nc3 + nc4;
    }
    
    printf("Your water bill is us$:%.2f ", waterBill);
	return 0;
}