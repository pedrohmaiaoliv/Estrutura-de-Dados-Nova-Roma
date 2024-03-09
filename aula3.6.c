#include <stdio.h>
int main()
{
    float nota1=0, nota2=0, media=0;
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf(media<5 ? "reprovado!" : media < 7? " recuperação!" : "Aprovado!");

}