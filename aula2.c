
#include <stdio.h>
int main()
{
    char nome[20];
    printf("QUal o seu nome?");
    fgets(nome, 7, stdin);
    fflush(stdin);
    printf("Muito prazer, %s!\n", nome);
    getchar();
    return 0;
}