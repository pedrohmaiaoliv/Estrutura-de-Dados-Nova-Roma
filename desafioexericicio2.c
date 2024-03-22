#include <stdio.h>

int main() {
    double numero1, numero2;
    
    printf("Informe o numero 1: ");
    scanf("%lf", &numero1);
    
    printf("Informe o numero 2: ");
    scanf("%lf", &numero2);
    
    if (numero2 !=0)
        printf("coeficiente é: %lf\n", (numero1/numero2));
    else
        printf("NAO PODE DIVIDIR POR ZERO! SENAO VOCE ABRE UM BURACO NEGRO!");
        
    return 0;
}