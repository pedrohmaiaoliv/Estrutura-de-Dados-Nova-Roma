#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale (LC_ALL,"portuguese");
    float notas[2];
    printf("Insira sua primeira nota: ");
    scanf("%f", &notas[0]);
    fflush(stdin);
     printf("Insira sua segunda nota: ");
    scanf("%f", &notas[1]);
    fflush(stdin);
    printf("\nSua média é: %.1f", (notas[0]+notas[1])/2);
    return 0;
}