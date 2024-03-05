//***** o Inicio de tudo *****
// int main()
// {

//     printf("Hello World!");

//     return 0;
// }




//***** O %s *****
// #include <stdio.h>

// int main()
// {

//     printf("Sou prof. %s e moro em %s", "Pedro", "Recife.");

//     return 0;
// }


//*********tESTE 2 FRASES************

// #include <stdio.h>
// #include <locale.h>
// int main()
// {
//     setlocale(LC_ALL, "portuguese");
//     printf("Olá Pernambuco!");
//     printf("\nOlá Recife!\n");
//     getchar();
//     return 0;
// }

// *************scanf entrada de dados************

// #include <stdio.h>
// int main()
// {
//     int numero;
//     printf("Digite um numero: ");
//     scanf("%d", &numero);
//     return 0;
// }

//********* CALCULAR IDADE ************

#include <stdio.h>
int main()
{
    int ano;
    printf("Que ano voce nasceu? ");
    scanf("%d, &ano ");

    fflush(stdin);
    
    printf("Voce tem %d anos.", (2024-ano));
    getchar();
    return 0;
}