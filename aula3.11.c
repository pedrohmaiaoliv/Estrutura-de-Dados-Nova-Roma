#include <stdio.h>
int main()
{
   int i=1, numero=0, soma=0;
   do
   {
        printf("Informe o valor %i : ",i);
        scanf("%i", &numero);
        soma += numero;
        i++;
        
   }
   while (numero != 0);
   printf("\nmedia dos valores: %i\n\n", soma/(i-2));
   return 0;
}