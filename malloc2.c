#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *p;
    p = (int *) malloc(5 * sizeof(int));
    if (p == NULL)
    {
        printf("Erro> Sem Memoria! \n");
        exit(1);
    }
    int i;
    for (i=0;i<5;i++)
    {
        printf("p[%d]=%d\n",i,p[i]);
    }
    getchar ();
    return 0;
}