#include <stdio.h>

int main() {
    int numero;
    
    printf("Informe o numero : ");
    scanf("%i", &numero);
    
      
    if (numero % 2 == 0)
        printf("O dobro do numero é: %i\n", numero * 2);
    else
        printf("Triplo do numero é: %i\n", numero * 3);
        
    return 0;
}