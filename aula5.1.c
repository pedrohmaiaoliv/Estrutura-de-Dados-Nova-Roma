#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    char letra = 'A';
    printf("O Código ASCII %i = %c", letra, letra);
    return 0;
}

// %i = INTeiERO da Letra A ou seja mostrar ela como inteiro, resumindo eu quero saber o ASCII da letra
// %c = a letra A