#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Pizza 
{
    char *name;
    int price;
};

struct Massas
{
    char *name;
    int price;
};

struct Seafood
{
    char *name;
    int price;
};

struct ComidaBrasileira
{
    char *name;
    int price;
};

void clearScreen() 
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

char *pizzas()
{
    

    struct Pizza pizza[] = 
    {
        {"Calabresa", 25},
        {"Peperoni", 37.50},
        {"Frango", 25},
        {"Dois Queijos", 30},
        {"Goiabada", 25}
        
    };
    

    static char chosenPizza[50];

     printf("Os sabores de pizza disponivéis são: \n");
    for (int i = 0; i < sizeof(pizza) / sizeof(pizza[0]); i++)
    {
        printf("%s - R$ %.2f\n", pizza[i].name, (float)pizza[i].price);
    }
    printf("Qual você deseja? ");
    scanf("%s", &chosenPizza);

    printf("O tempo de espera para a pizza de %s é 30min.\n", chosenPizza); 
   
    return chosenPizza; 
}

char *massas()
{
    struct Massas massa[] =
    {
        {"Carbonara", 20},
        {"Espaguette", 18.50},
        {"Lasangna", 25},
        {"Ravioli", 22.45},
        {"Fettuccine", 25}
    };

    static char chosenMassa[50];
    
    printf("Os sabores de massas disponíveis são: \n");
    for (int i = 0; i < sizeof(massa) / sizeof(massa[0]); i++) 
    {
        printf("%s - R$ %2.f\n", massa[i].name, (float)massa[i].price);
    }

    printf("Qual é a sua escolha?: ");
    scanf("%s", &chosenMassa);

    printf("O tempo de espera para %s é 25min \n", chosenMassa);
    return chosenMassa;
}

char *seaFood()
{
    struct Seafood seaFood[] =
    {
        {"Sushi", 30},
        {"King Crab", 50},
        {"Polvo", 35},
        {"Cevicce", 40.55},
        {"Temaki", 30}
    };

    static char chosenSeaFood[50];

    printf("Os pratos disponíveis são: \n");

    for (int i = 0; i < sizeof(seaFood) / sizeof(seaFood[0]); i++)
    {
        printf("%s - R$ %2.f\n", seaFood[i].name, (float)seaFood[i].price);
    }
    
    printf("Qual é sua escolha?: ");
    scanf("%s", &chosenSeaFood);

    printf("O tempo de espera do %s é de 35min.\n", chosenSeaFood);
    return chosenSeaFood;
}

char *comidaBrasileira()
{
    struct ComidaBrasileira brasuca[] = 
    {
        {"Feijoada", 30},
        {"Churrasco", 40},
        {"Pato no Tucupi", 35.99},
        {"Mocofato", 30},
        {"Arroz Carreteiro", 30}
    };

    static char chosenBrasuca[50];

    printf("Os pratos disponíveis são: \n");
    for (int i = 0; i < sizeof(brasuca) / sizeof(brasuca[0]); i++)
    {
        printf("%s - R$ %2.f\n", brasuca[i].name, (float)brasuca[i].price);
    }

    printf("Qual é a sua escolha?: \n");
    scanf("%s", &chosenBrasuca);

    printf("O tempo de espera para %s é 35min. \n");
    return chosenBrasuca;
}


char menu()
{
    char menuType;
    printf( "Olá, temos no nosso cardápio hoje alguns tipos de comidas: \n"
        "Tipo 1: Pizzas\n "
        "Tipo 2: Massas\n "
        "Tipo 3: Frutos do Mar\n "
        "Tipo 4: Comida Brasileira.\n "
        "Qual tipo de estilo culinário será escolhido?: ");
    scanf("%c", &menuType);

    clearScreen();

     switch (menuType)
    {
        case '1':
            pizzas();
            break;

        case '2':
            massas();
            break;

        case '3': 
            seaFood();
            break;

        case '4':
            comidaBrasileira();
            break;
        default:
            printf("Insira um estilo válido!\n");
    }

    return menuType;
}

int main()
{
    menu();
    return 0;
}
