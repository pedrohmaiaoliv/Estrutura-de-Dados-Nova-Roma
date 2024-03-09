#include <stdio.h>
#include <ctype.h>
int main()
{
    char sexo;
    int tempo = 0;
    printf("Bem vindo a Calculadora de aposentadoria em Linguagem C!");
    printf("Informe o seu Sexo M (maiusculo) para Masculino ou F (maiuculo) para  Feminino: " );
    scanf("%c", &sexo);
    printf("Quanto tempo de trabalho você tem: ");
    scanf("%i", &tempo);
    sexo=toupper(sexo);
    

    if ((sexo == 'M' && tempo >=35))
        printf("Aposentado pelo INSS");
    else if ((sexo == 'F' && tempo >=25))
        printf("Aposentada pelo INSS");

    else
        printf("Vai Trabalhar!!");
    return 0;
    
}