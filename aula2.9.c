// variável global
#include <stdio.h>
int x=10;
int f1()
{
    printf("Valor de x: %i\n",x);
    return 0;
}
int main()
{
    printf("Valor de x: %i\n",x);
    f1();
    return 0;
}