#include <stdio.h>
#define AREA(altura,base) ((altura*base)/2)
int main()
{
    int base, altura;
    printf("Digite o valor de Altura: ");
    scanf("%d", &altura);
    printf("Digite o valor de Base: ");
    scanf("%d", &base);
    printf("A área do triângulo com altura %d e base %d é: %d\n", altura, base, AREA(altura, base));
    return 0;
    }
