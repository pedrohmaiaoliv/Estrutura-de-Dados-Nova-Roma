#include <stdio.h>
int main()
{
   int i = 1, numero =-1, soma = 0;
   while (numero != 0)
   {
        printf("Informe o valor %i: ", i);
        scanf("%i", &numero);
        soma += numero;
        i++;    
   }
   printf("\nMédia dos valores: %i\n\n", soma / (i - 2));
   return 0;
}