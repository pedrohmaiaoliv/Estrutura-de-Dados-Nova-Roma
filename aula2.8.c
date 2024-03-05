//variáveis locais, so é visivel onde foram criadas

// #include <stdio.h>
// int f1 ()
// {
//     int x = 5;
//     printf("Valor de x: %i\n", x);
//     return 0;
// }
// int main()
// {
//     int x=10;
//     f1();
//     printf("Valor de x: %i\n",x);
//     return 0;
// }

// Endereço de memoria de X
#include <stdio.h>
int f1()
{
    int x = 5;
    printf("Endereço de x na função f1(): %i\n",&x);
    return 0;
}
int main()
{
    int x=10;
    f1();
    printf("Endereço de x na função main(): %i\n",&x);
    return 0;
}