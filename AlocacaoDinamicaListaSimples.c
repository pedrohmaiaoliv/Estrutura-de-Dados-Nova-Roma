#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int num;

    struct node *next;
}node;

void AdicionarFim(node *HEAD) //push
{
    node *newnode = (node *) malloc(sizeof(node));
    if(!newnode)
    {
        printf("Sem memoria Disponivel!\n");
        system("Pause");
    }
    else
    {
        newnode->next=NULL;
        if(HEAD->next == NULL)
        HEAD->next=newnode;
        else
        {
            node *tmp = HEAD->next;
            while(tmp->next !=NULL)
                tmp = tmp->next;
            tmp->next = newnode;
        }
        printf("newnode elemento: ");
        scanf("%d", &newnode->num);
    }
}
void Exibir(node *HEAD)
{
    if (HEAD->next ==NULL)
        printf("LISTA VAZIA!");
    else
    {
        node *tmp;
        for(tmp=HEAD->next; tmp!=NULL; tmp=tmp->next)
            printf("%d ", tmp->num);
    }
    printf("\n\n");
    system("PAUSE");
}
void Remover(node *HEAD)
{
    if(HEAD->next ==NULL)
        printf("LISTA VAZIA!");
    else
    {
        node *tmp=HEAD->next;
        HEAD->next = tmp->next;
        printf("No %d removido com sucesso!", tmp->num);

    }
    printf("\n\n");
    system("PAUSE");
}
void Liberar(node *HEAD)
{
    node *tmp;
    while(HEAD->next !=NULL)
    {
        tmp = (HEAD->next)->next;
        free(HEAD->next);
        HEAD->next = tmp;
    }
}
int main (void)
{
    node *HEAD = (node *) malloc(sizeof(node));
    if(!HEAD)
    {
        printf("Sem memoria!!! ja falei pow!\n");
        exit(1);
    }
    HEAD->next = NULL; //Inicializa o Nó Cego!

    int opt;
    do
    {
        system("CLS");
        printf("========================\n");
        printf("FILA ENCADEADAAA!!!\n");
        printf("1 - Adiciona um nó\n");
        printf("2 - Remover nó\n");
        printf("3 - Exibir Fila\n");
        printf("4 - Liberar Fila\n");
        printf("5 - Sair\n");
        printf("========================\n");
        printf("Escolha a opção\n");
        scanf("%d", &opt);
        system("CLS");

            switch(opt)
            {
                case 1: AdicionarFim(HEAD);
                        break;
                case 2: Remover(HEAD);
                        break;
                case 3: Exibir(HEAD);
                        break;
                case 4: Liberar(HEAD);
                        Exibir(HEAD);
                        break;
                case 5: Liberar(HEAD);
                        break;
                default:printf("Comando invalido\n\n");

            }
        }while(opt!=5);
        free(HEAD);
        return 0;

}

