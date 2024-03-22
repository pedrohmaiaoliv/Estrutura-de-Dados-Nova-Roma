#include <stdio.h>

int main() {
    int velocidadeMotorista, velocidadeMaxima;

    velocidadeMaxima = 60;
    
    printf("Informe a velocidade que o motorista passou:", velocidadeMotorista);
    scanf("%i", &velocidadeMotorista);
    
   
    
    if (velocidadeMotorista < velocidadeMaxima)
        printf("Nao foi  Multado");
    else if ((velocidadeMotorista - velocidadeMaxima) <= 10)
        printf("50 reais de multa");

    else if ((velocidadeMotorista - velocidadeMaxima) <= 30)
        printf("100 reais de multa");

    else if ((velocidadeMotorista - velocidadeMaxima) > 30)
        printf("200 conto de multa se fudeu!");
    return 0;
}