#include <stdio.h>
#include <locale.h>
int main()
{
    int numero;
    setlocale(LC_ALL, "portuguese");
    printf("Informe um número entre 1 e 3: ");
    scanf("%d", &numero);
    switch(numero)  
    {
            case 1:
                    printf("Voce digitou o 1.");
                    break;
            case 2:
                    printf("Voce digitou o 2.");
                    break;
            case 3: 
                    printf("Voce digitou o 3.");
                    break;
            default:
                    printf("Voce digitou um numero invalido.");
                    break;
    }
    getchar();
    return 0;
}