#include <stdio.h>
int main()
{
    float nota1=0, nota2=0, media=0;
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;

    if (media <5)
        printf("reprovado, sua média é:  %.2f\n", media);
    else if (media >=5 && media <7)
        printf("em recuperação sua média é: %.2f\n", media);

    else
        printf("Aprovadissimo, sua média é: %.2f\n", media);
    return 0;
    
}