#include <stdio.h>
int main()
{
    char x = 'F';
    char *ponteiro;
    ponteiro = &x;
    printf("Valor de x: %c\n", *ponteiro);
    getchar ();
    return 0;
}