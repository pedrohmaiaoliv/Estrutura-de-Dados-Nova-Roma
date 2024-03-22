#include <stdio.h>

int main() {
    int anos_fumando, cigarros_por_dia;
    double preco_carteira, dinheiro_gasto;

   
    printf("Informe o número de anos que você fumou: ");
    scanf("%d", &anos_fumando);

    printf("Informe o número de cigarros fumados por dia: ");
    scanf("%d", &cigarros_por_dia);

    printf("Informe o preço de uma carteira de cigarros: ");
    scanf("%lf", &preco_carteira);

    
    int total_cigarros = anos_fumando * 365 * cigarros_por_dia;

   
    dinheiro_gasto = (total_cigarros / 20.0) * preco_carteira;

   
    printf("Dinheiro gasto em cigarros: R$%.2lf\n", dinheiro_gasto);

    return 0;
}
