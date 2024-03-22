#include <stdio.h>

int main() {
    int idadeNadador;
    
    printf("a idade do  Nadador : ");
    scanf("%i", &idadeNadador);
    
      
        if (idadeNadador < 5)
        printf("Categoria Nenem!");
        else if (idadeNadador >= 5)
        printf("Infantil A");
        else if (idadeNadador >= 8)
        printf("Infantil B");
        else if (idadeNadador >= 11)
        printf("juvenil A");
        else if (idadeNadador >= 14)
        printf("juvenil B");
        else if (idadeNadador >=18 )
        printf("Senior");
        

        
    return 0;
}