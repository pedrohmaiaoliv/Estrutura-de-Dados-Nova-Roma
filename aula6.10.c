#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome [20];
}s_dados;
int main()
{
    int i, qtd;
    printf("Quantidade registros: ");
    scanf("%d", &qtd); fflush(stdin);
    s_dados dados[qtd];
    for (i=0;i<qtd;++i)
    {
        printf("Nome: ");
        scanf(" %20[^\n]", &dados[i].nome); fflush(stdin);

    };
    system("CLS");
    for (i=0;i<qtd;++i)
        printf("Nome: %s\n", dados[i].nome);
        system("PAUSE");
        return 0;
}