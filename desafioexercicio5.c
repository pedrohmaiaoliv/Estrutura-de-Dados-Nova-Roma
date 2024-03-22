#include <stdio.h>

int main() {
    int numero1, numero2, numero3;
    
    printf("Informe o numero 1: ");
    scanf("%i", &numero1);
    
    printf("Informe o numero 2: ");
    scanf("%i", &numero2);

     printf("Informe o numero 3: ");
    scanf("%i", &numero3);
    
    if (numero1 > numero2+numero3)
        printf("O Primeiro Numero é Maior que a soma dos outros 2");
    else if (numero1 == numero2+numero3)
        printf("Ele é Igual!!");

    else 
        printf("Ele é Menor!");
        
    return 0;
}