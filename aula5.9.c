#include <stdio.h>
int main(void)
{
    char nomeDoMes[12][20] = {"Janeiro", "Fevereiro", "Março" ,"Abril" ,"Maio" ,"Junho" ,"Julho" ,"Agosto",
    "Setembro","Outubro","Novembro","Dezembro"}, mes=0;
    int diaDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
    printf("Digite o numero do mês (de 1 a 12): ");
    scanf("%i", &mes);
    mes--;

    if (mes < 1 || mes > 12){
        printf("Mes inválido!\n");
    }else{
        printf("O mês %s tem %i dias.\n", nomeDoMes[mes], diaDoMes[mes]);
    }
    getchar();
    return 0;
}