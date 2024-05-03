#include <stdio.h>
int main()
{
    int vetor [1], *v;
    v = vetor;
    v[0] = 123;
    printf ("vetor = %d\n", vetor);