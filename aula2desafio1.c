#include <stdio.h>
int area(int base, int altura)
{
    return (base * altura)/2;
}
int main()
{
    int base,altura;

    printf("Digite o valor da Base: ");
    scanf("%i", &base);
    printf("Digite o valor de Altura: ");
    scanf("%i", &altura);
    


    printf("o valor da area do triangulo é: %i",area(base,altura));
    return 0;
}