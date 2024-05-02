#include <stdio.h>
#include <stdbool.h>

struct priceList
{
    char *name;
    float price;
}

void clearScreen() 
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void *priceTable()
{
    struct priceList PriceList[] = {

        {"Coconut Cookie", 5.30},
        {"Cream Cracker", 6.00},
        {"Nikito", 3.20},
        {"Mini Soda", 2.50},
    }

    printf("_____Price Table_____\n");
    for (int i = 0; i < sizeof(PriceList) / sizeof(PriceList[0]); i++){
        printf("%s - R$ %.2f\n", PriceList[i].name, PriceList[i].price)
    }

}

int main()
{
    *priceTable();

    char product;
    int units;
    float total;


    printf("_____________________\n
    What's u'll buy?: \n");
    scanf("%s", &product);
    printf("How much units?: \n
            _____________________\n");
    scanf("%d", &units);

    for (int i = 0; sizeof(PriceList) / sizeof(PriceList[0]); i++) {
        
        if (PriceList[i].name = product){
            
            if (units > 15){
                total = PriceList[i].price - 0.15;
            } else if (total > 40.00) {
                total = PriceList[i].price - 0.15;
            }
        }
    }



    clearScreen();

    char comfirm;
    printf("_____Checkout_____\n");
    printf("Product: %s\n
            Units: %d\n
            Total: %f\n
            Confirm?[y/n]: ", product, units, total);
    scanf("%s", &comfirm);
    
    if (comfirm == "y") {
        clearScreen();
        char response;
        printf("Choose another item?[y/n]: ");
        scanf("%s", &response)
        if (response == "n") {
            prinf("Ty, see u!");
        }
    }
}