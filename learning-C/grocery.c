#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct priceList
{
    char *name;
    float price;
};

struct priceList PriceList[] = {
    {"Coconut Cookie", 5.30},
    {"Cream Cracker", 6.00},
    {"Nikito", 3.20},
    {"Mini Soda", 2.50},
};

void clearScreen() 
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int *priceTable()
{
    printf("_____Price Table_____\n\n");
    for (int i = 0; i < sizeof(PriceList) / sizeof(PriceList[0]); i++) {
        printf("%d. %s - R$ %.2f\n", i+1, PriceList[i].name, PriceList[i].price);
    }
    return 0;
}

float calculateTotal(char *product, int units) 
{
    float unitPrice = 0.0;
    for (int i = 0; i < sizeof(PriceList) / sizeof(PriceList[0]); i++) {
        if (strcmp(PriceList[i].name, product) == 0) {
            unitPrice = PriceList[i].price;
            break;
        }
    }

    float total = unitPrice * units;

    if (units > 15 || total > 40.00) {
        total *= 0.85; 
    }

    return total;
}

int main()
{
    char product[100];
    int units;
    
    priceTable();
    
    printf("_____________________\n\nWhich item would you like to buy? (Enter the item number): ");
    int choice;
    scanf("%d", &choice);
    strcpy(product, PriceList[choice - 1].name);

    printf("How many units?: ");
    scanf("%d", &units);

    float total = calculateTotal(product, units);

    clearScreen();

    printf("_____Checkout_____\n");
    printf("Product: %s\nUnits: %d\nTotal: %.2f\n", product, units, total);

    return 0;
}