#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct Pessoa
{
    int id;
    char nome[30];
    int idade;
    struct Pessoa *prox;
} Pessoa;

// Criar nova pessoa
// Retorna endereço da nova pessoa

Pessoa *criarPessoa()
{
    Pessoa *novaPessoa = (Pessoa *)malloc(sizeof(Pessoa));
    if (novaPessoa == NULL)
    {
        // memoria insuficiente
        printf("Erro de alocacao");
        exit(EXIT_FAILURE);
    }
    novaPessoa->prox = NULL;
    return novaPessoa; // endereço de memoria alocado para a nova pessoa
}

Pessoa *cadastrar(Pessoa *lista)
{
    Pessoa *novaPessoa = criarPessoa();
    // Inserir as informações

    srand(time(NULL));
    novaPessoa->id = rand() % 100;

    printf("Digite o nome: ");
    fgets(novaPessoa->nome, sizeof(novaPessoa), stdin);
    fflush(stdin);

    printf("Digite a idade: ");
    scanf("%d", &novaPessoa->idade);

    // 1 - A lista está sem cadastro

    if (lista == NULL)
    {
        return novaPessoa;
    }
    else
    {
        // percorrer a lista para encontrar a pessoa que aponta para NULL
        Pessoa *atual = lista;
        while (atual != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novaPessoa;
        return lista;
    }

    // 2 - Já tem pessoa cadastrada
}

int main()
{

    int opcao;
    Pessoa *lista = NULL;

    do
    {
        printf("\n1 - Cadastrar");
        printf("\n2 - Mostrar");
        printf("\n3 - Buscar");
        printf("\n4 - Alterar");
        printf("\n5 - Excluir");
        printf("\n0 - Sair");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            cadastrar(lista);
            break;
        // case 2:
        //     mostrar(lista);
        //     break;
        // case 3:
        //     buscar(lista);
        //     break;
        // case 4:
        //     alterar(lista);
        //     break;
        // case 5:
        //     excluir(lista);
        //     break;
        // case 0:
        //     break;
        default:
            break;
        }
    } while (opcao != 0);

    return 0;
    
}
