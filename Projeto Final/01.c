#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct RegistroVeiculo
{
    char proprietario[50];
    char combustivel[15];
    char modelo[50];
    char cor[20];
    char chassi[17];
    int ano;
    char placa[8];
    struct RegistroVeiculo *next;
};

struct RegistroVeiculo *inserirRegistro(struct RegistroVeiculo *head)
{
    struct RegistroVeiculo *novoRegistro = (struct RegistroVeiculo *)malloc(sizeof(struct RegistroVeiculo));

    if (novoRegistro == NULL)
    {
        printf("Erro ao alocar memoria para novo registro.\n");
        exit(EXIT_FAILURE);
    }

    printf("Digite o Proprietario: ");
    scanf("%s", novoRegistro->proprietario);

    printf("Digite o Combustivel (alcool, diesel, gasolina): ");
    scanf("%s", novoRegistro->combustivel);

    printf("Digite o Modelo: ");
    scanf("%s", novoRegistro->modelo);

    printf("Digite a Cor: ");
    scanf("%s", novoRegistro->cor);

    printf("Digite o Chassi: ");
    scanf("%s", novoRegistro->chassi);

    printf("Digite o Ano: ");
    scanf("%d", &novoRegistro->ano);

    printf("Digite a Placa (letras maiusculas.Ex: AAA0000): ");
    scanf("%s", novoRegistro->placa);

    novoRegistro->next = head;

    return novoRegistro;
}

void listarVeiculosAnoDiesel(struct RegistroVeiculo *head)
{
    struct RegistroVeiculo *current = head;
    while (current != NULL)
    {
        if (current->ano >= 2010 && strcmp(current->combustivel, "diesel") == 0)
        {
            printf("Proprietario: %s\n", current->proprietario);
        }
        current = current->next;
    }
}

void listarPlacasJ(struct RegistroVeiculo *head)
{
    struct RegistroVeiculo *current = head;
    while (current != NULL)
    {
        if (current->placa[0] == 'J' && (current->placa[6] == '0' || current->placa[6] == '2' || current->placa[6] == '4' || current->placa[6] == '7'))
        {
            printf("Placa: %s, Proprietario: %s\n", current->placa, current->proprietario);
        }
        current = current->next;
    }
}

void listarModeloCorVogalSomaPar(struct RegistroVeiculo *head)
{
    struct RegistroVeiculo *current = head;
    while (current != NULL)
    {
        char segundaLetra = current->placa[1];
        int somaNumeros = 0;
        for (int i = 3; i <= 6; i++)
        {
            somaNumeros += current->placa[i] - '0';
        }

        if ((segundaLetra == 'A' || segundaLetra == 'E' || segundaLetra == 'I' || segundaLetra == 'O' || segundaLetra == 'U') && somaNumeros % 2 == 0)
        {
            printf("Modelo: %s, Cor: %s\n", current->modelo, current->cor);
        }

        current = current->next;
    }
}

void trocarProprietarioChassiSemZero(struct RegistroVeiculo *head, const char *novoProprietario, const char *chassi)
{
    struct RegistroVeiculo *current = head;
    while (current != NULL)
    {
        int possuiZero = 0;
        for (int i = 3; i < 7; i++)
        {
            if (current->placa[i] == '0')
            {
                possuiZero = 1;
                break;
            }
        }

        if (!possuiZero && strcmp(current->chassi, chassi) == 0)
        {
            strcpy(current->proprietario, novoProprietario);
            printf("Proprietario atualizado para %s\n", novoProprietario);
            return;
        }

        current = current->next;
    }
}

void liberarLista(struct RegistroVeiculo *head)
{
    while (head != NULL)
    {
        struct RegistroVeiculo *temp = head;
        head = head->next;
        free(temp);
    }
}

void exibirRegistros(struct RegistroVeiculo *head)
{
    struct RegistroVeiculo *current = head;
    while (current != NULL)
    {
        printf("Proprietario: %s, Modelo: %s, Placa: %s\n", current->proprietario, current->modelo, current->placa);
        current = current->next;
    }
}

int main()
{
    struct RegistroVeiculo *lista = NULL;
    int opcao;

    do
    {
        printf("\nMenu:\n");
        printf("1. Inserir novo registro\n");
        printf("2. Listar veiculos do ano 2010 ou posterior movidos a diesel\n");
        printf("3. Listar placas que comecam com 'J' e terminam com 0, 2, 4 ou 7\n");
        printf("4. Listar modelo e cor de veiculos com segunda letra da placa vogal e soma dos valores numericos e par\n");
        printf("5. Trocar proprietario com fornecimento do número do chassi para carros sem digito zero na placa\n");
        printf("6. Exibir registros\n");
        printf("0. Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            lista = inserirRegistro(lista);
            break;
        case 2:
            listarVeiculosAnoDiesel(lista);
            break;
        case 3:
            listarPlacasJ(lista);
            break;
        case 4:
            listarModeloCorVogalSomaPar(lista);
            break;
        case 5:
        {
            char novoProprietario[50];
            char chassi[17];
            printf("Digite o novo proprietario: ");
            scanf("%s", novoProprietario);
            printf("Digite o chassi do veiculo: ");
            scanf("%s", chassi);
            trocarProprietarioChassiSemZero(lista, novoProprietario, chassi);
            break;
        }
        case 6:
            exibirRegistros(lista);
            break;
        case 0:
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    liberarLista(lista);

    return 0;
}
