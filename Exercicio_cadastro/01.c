#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USUARIOS 1000

struct Usuario
{
    int id;
    char nomeCompleto[50];
    char email[50];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
};

int gerarId()
{
    srand((unsigned)time(NULL));
    return rand();
}

int validarEmail(const char *email)
{
    return strchr(email, '@') != NULL;
}

int validarSexo(const char *sexo)
{
    return strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "Indiferente") == 0;
}

int validarAltura(double altura)
{
    return altura >= 1.0 && altura <= 2.0;
}

int validarOpcao(char opcao)
{
    return opcao >= '1' && opcao <= '5';
}

void incluirUsuario(struct Usuario usuarios[], int *numUsuarios)
{
    if (*numUsuarios < MAX_USUARIOS)
    {
        struct Usuario novoUsuario;
        novoUsuario.id = gerarId();

        printf("Nome completo: ");
        scanf(" %[^\n]", novoUsuario.nomeCompleto);

        do
        {
            printf("Email: ");
            scanf(" %[^\n]", novoUsuario.email);
        } while (!validarEmail(novoUsuario.email));

        do
        {
            printf("Sexo (Feminino, Masculino, Indiferente): ");
            scanf(" %[^\n]", novoUsuario.sexo);
        } while (!validarSexo(novoUsuario.sexo));

        printf("Endereco: ");
        scanf(" %[^\n]", novoUsuario.endereco);

        do
        {
            printf("Altura (entre 1 e 2 metros): ");
            scanf("%lf", &novoUsuario.altura);
        } while (!validarAltura(novoUsuario.altura));

        do
        {
            printf("Vacina (1 para sim, 0 para não): ");
            scanf("%d", &novoUsuario.vacina);
        } while (novoUsuario.vacina != 0 && novoUsuario.vacina != 1);

        usuarios[*numUsuarios] = novoUsuario;
        (*numUsuarios)++;
        printf("Usuário incluído com sucesso!\n");
    }
    else
    {
        printf("Limite de usuários atingido.\n");
    }
}

void editarUsuario(struct Usuario usuarios[], int numUsuarios)
{
    int idEditar;
    printf("Digite o ID do usuário que deseja editar: ");
    scanf("%d", &idEditar);

    int encontrado = 0;
    for (int i = 0; i < numUsuarios; i++)
    {
        if (usuarios[i].id == idEditar)
        {
            printf("Nome completo: ");
            scanf(" %[^\n]", usuarios[i].nomeCompleto);

            do
            {
                printf("Email: ");
                scanf(" %[^\n]", usuarios[i].email);
            } while (!validarEmail(usuarios[i].email));

            do
            {
                printf("Sexo (Feminino, Masculino, Indiferente): ");
                scanf(" %[^\n]", usuarios[i].sexo);
            } while (!validarSexo(usuarios[i].sexo));

            printf("Endereco: ");
            scanf(" %[^\n]", usuarios[i].endereco);

            do
            {
                printf("Altura (entre 1 e 2 metros): ");
                scanf("%lf", &usuarios[i].altura);
            } while (!validarAltura(usuarios[i].altura));

            do
            {
                printf("Vacina (1 para sim, 0 para não): ");
                scanf("%d", &usuarios[i].vacina);
            } while (usuarios[i].vacina != 0 && usuarios[i].vacina != 1);

            printf("Usuário editado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("Usuário não encontrado.\n");
    }
}

void excluirUsuario(struct Usuario usuarios[], int *numUsuarios)
{
    int idExcluir;
    printf("Digite o ID do usuário que deseja excluir: ");
    scanf("%d", &idExcluir);

    int encontrado = 0;
    for (int i = 0; i < *numUsuarios; i++)
    {
        if (usuarios[i].id == idExcluir)
        {
            for (int j = i; j < *numUsuarios - 1; j++)
            {
                usuarios[j] = usuarios[j + 1];
            }
            (*numUsuarios)--;
            printf("Usuário excluído com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("Usuário não encontrado.\n");
    }
}

void buscarUsuarioEmail(struct Usuario usuarios[], int numUsuarios)
{
    char emailBuscar[50];
    printf("Digite o email do usuário que deseja buscar: ");
    scanf(" %[^\n]", emailBuscar);

    int encontrado = 0;
    for (int i = 0; i < numUsuarios; i++)
    {
        if (strcmp(usuarios[i].email, emailBuscar) == 0)
        {
            printf("Usuário encontrado:\n");
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome completo: %s\n", usuarios[i].nomeCompleto);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf\n", usuarios[i].altura);
            printf("Vacina: %d\n", usuarios[i].vacina);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("Usuário não encontrado.\n");
    }
}

void imprimirUsuarios(struct Usuario usuarios[], int numUsuarios)
{
    if (numUsuarios > 0)
    {
        printf("Lista de todos os usuários:\n");
        for (int i = 0; i < numUsuarios; i++)
        {
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome completo: %s\n", usuarios[i].nomeCompleto);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf\n", usuarios[i].altura);
            printf("Vacina: %d\n", usuarios[i].vacina);
            printf("------------------------\n");
        }
    }
    else
    {
        printf("Nenhum usuário cadastrado.\n");
    }
}

int main()
{
    struct Usuario usuarios[MAX_USUARIOS];
    int numUsuarios = 0;
    char opcao;

    do
    {
        printf("\nEscolha uma opção:\n");
        printf("1. Incluir usuário\n");
        printf("2. Editar usuário\n");
        printf("3. Excluir usuário\n");
        printf("4. Buscar usuário pelo email\n");
        printf("5. Imprimir todos os usuários\n");
        printf("6. Sair\n");
        printf("Opção: ");
        scanf(" %c", &opcao);

        if (!validarOpcao(opcao))
        {
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }

        switch (opcao)
        {
        case '1':
            incluirUsuario(usuarios, &numUsuarios);
            break;
        case '2':
            editarUsuario(usuarios, numUsuarios);
            break;
        case '3':
            excluirUsuario(usuarios, &numUsuarios);
            break;
        case '4':
            buscarUsuarioEmail(usuarios, numUsuarios);
            break;
        case '5':
            imprimirUsuarios(usuarios, numUsuarios);
            break;
        }
    } while (opcao != '6');

    printf("Programa encerrado.\n");

    return 0;
}
