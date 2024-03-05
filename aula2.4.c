#include <stdio.h>
#define COMISSAO 0.3
int main()
{
    double venda;
    printf("Digite o vlaor da venda: ");
    scanf ("%lf",&venda);
    printf("Comissão = %.2lf \n", venda*COMISSAO);
    return 0;
}