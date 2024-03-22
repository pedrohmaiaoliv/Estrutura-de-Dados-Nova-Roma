#include <stdio.h>

int main() {
    double raio, altura, volume;
    double pi = 3.14;
    
    printf("Bem vindo ao programa que calcula o raio do Cilindro!");

    printf("Informe o raio: ");
    scanf("%lf", &raio);
    
    printf("Informe a altura: ");
    scanf("%lf", &altura);

    volume = pi*raio*raio*altura;

    
    printf("O Volume do Cilindro é: %lf\n", volume);
    return 0;
}