#include <stdio.h>

int main(void){
    int menu;
    float preco;
    float quantidade;
    float compra;

    printf("Escolha o Artigo \n");
    printf("[100] Cachorro Quente \n [101] Hamburguer \n [102] Cheeseburger \n [103] Omelete \n [104] Francesinha \n");
    scanf("%d", &menu);
    if (menu == 100)
    {
        preco = 2.50;
        printf("O Cachorro Quente custa 2.50€ \n");
        printf("Quantos queres? \n");
        scanf(" %f", &quantidade);
        compra = quantidade * preco;
        printf("Valor a pagar e: %0.2f€ \n",compra);
    }
    else if (menu == 101)
    {
        preco = 3.50;
        printf("O Hamburguer custa 3.50€ \n");
        printf("Quantos queres? \n");
        scanf(" %f", &quantidade);
        compra = quantidade * preco;
        printf("Valor a pagar e: %0.2f€ \n",compra);
    }
    else if (menu == 102)
    {
        preco = 4.00;
        printf("O Cheeseburguer custa 4.00€ \n");
        printf("Quantos queres? \n");
        scanf(" %f", &quantidade);
        compra = quantidade * preco;
        printf("Valor a pagar e: %0.2f€ \n",compra);
    }
    else if (menu == 103)
    {
        preco = 3.75;
        printf("A omelete custa 3.75€ \n");
        printf("Quantos queres? \n");
        scanf(" %f", &quantidade);
        compra = quantidade * preco;
        printf("Valor a pagar e: %0.2f€ \n",compra);
    }
    else
    {
        preco = 7.50;
        printf("A francesinha custa 7.50€ \n");
        printf("Quantos queres? \n");
        scanf(" %f", &quantidade);
        compra = quantidade * preco;
        printf("Valor a pagar e: %0.2f€ \n",compra);
    }
    
    
    return 0;
}