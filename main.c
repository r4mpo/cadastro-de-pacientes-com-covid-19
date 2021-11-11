#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 200

int dia_nascimento [SIZE];
int mes_nascimento [SIZE];
int ano_nascimento [SIZE];
int dia_diagnostico [SIZE];
int mes_diagnostico [SIZE];
int ano_diagnostico [SIZE];
char op_1 [SIZE] [50];
char op_2 [SIZE] [50];
char op_3 [SIZE] [50];
char op_4 [SIZE] [50];
int op;
char nome_paciente [SIZE][50];
char email_paciente [SIZE][50];
long long int cpf_paciente [SIZE];
long long int telefone_paciente [SIZE];
char outra_comorbidade [SIZE][50];
struct endereco e;

void menu();
void cadastro();
void pesquisa();
void login();
void introducao();

struct endereco {
    char rua [SIZE][50];
    char estado [SIZE][50];
    char cidade [SIZE][50];
    char bairro [SIZE][50];
    char cep [SIZE][50];
    char numero [SIZE][50];
};

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    introducao();
    login();
    menu();
}

void pesquisa() {
    long long int cpf_paciente_pesquisa;
    char nome_paciente_pesquisa[50];
    char email_paciente_pesquisa[50];
    int i;
    do {
        printf("\n                                                           --- PESQUISAR PACIENTES COM COVID-19 ---");
        printf("\n                                                           Digite para pesquisar por 1 - nome, 2 - CPF ou 3 - E-mail: ");
        scanf("%d", &op);
        switch(op) {
        case 1:
            printf ("\n                                                           Insira o nome do paciente: ");
            scanf(" %[^\n]", &nome_paciente_pesquisa);
            for(i=0;i<SIZE;i++) {
                if(strcmp(nome_paciente[i], nome_paciente_pesquisa)==0){
                    printf("\                                                           Nome: %s\n                                                           Idade no ano do diagnóstico: %d anos\n                                                           Email: %s\n                                                           CPF: %lld\n                                                           Estado: %s\n                                                           Cidade: %s\n                                                           Bairro: %s\n                                                           Rua: %s\n                                                           Número da Casa: %s\n                                                           Cep: %s\n                                                           Telefone: %lld\n                                                           Outra comorbidade: %s\n                                                           Data de Nascimento: %2d/%2d/%3d\n                                                           Data do Diagnóstico: %2d/%2d/%3d", nome_paciente[i], ano_diagnostico[i] - ano_nascimento[i], email_paciente[i], cpf_paciente[i], e.estado[i], e.cidade[i], e.bairro[i], e.rua[i], e.numero[i], e.cep[i], telefone_paciente[i], outra_comorbidade[i], dia_nascimento[i], mes_nascimento[i], ano_nascimento[i], dia_diagnostico[i], mes_diagnostico[i], ano_diagnostico[i]);
                }
            }
            break;
        case 2:
            printf ("\n                                                           Insira o CPF do paciente: ");
            scanf("%lld", &cpf_paciente_pesquisa);
            for(i=0;i<SIZE;i++) {
                if(cpf_paciente[i] == cpf_paciente_pesquisa){
                    printf("\                                                           Nome: %s\n                                                           Idade no ano do diagnóstico: %d anos\n                                                           Email: %s\n                                                           CPF: %lld\n                                                           Estado: %s\n                                                           Cidade: %s\n                                                           Bairro: %s\n                                                           Rua: %s\n                                                           Número da Casa: %s\n                                                           Cep: %s\n                                                           Telefone: %lld\n                                                           Outra comorbidade: %s\n                                                           Data de Nascimento: %2d/%2d/%3d\n                                                           Data do Diagnóstico: %2d/%2d/%3d", nome_paciente[i], ano_diagnostico[i] - ano_nascimento[i], email_paciente[i], cpf_paciente[i], e.estado[i], e.cidade[i], e.bairro[i], e.rua[i], e.numero[i], e.cep[i], telefone_paciente[i], outra_comorbidade[i], dia_nascimento[i], mes_nascimento[i], ano_nascimento[i], dia_diagnostico[i], mes_diagnostico[i], ano_diagnostico[i]);
                }
            }
            break;
        case 3:
            printf ("\n                                                           Insira o e-mail do paciente: ");
            scanf("%s", &email_paciente_pesquisa);
            for(i=0;i<SIZE;i++) {
                if(strcmp(email_paciente[i], email_paciente_pesquisa)==0){
                    printf("\                                                           Nome: %s\n                                                           Idade no ano do diagnóstico: %d anos\n                                                           Email: %s\n                                                           CPF: %lld\n                                                           Estado: %s\n                                                           Cidade: %s\n                                                           Bairro: %s\n                                                           Rua: %s\n                                                           Número da Casa: %s\n                                                           Cep: %s\n                                                           Telefone: %lld\n                                                           Outra comorbidade: %s\n                                                           Data de Nascimento: %2d/%2d/%3d\n                                                           Data do Diagnóstico: %2d/%2d/%3d", nome_paciente[i], ano_diagnostico[i] - ano_nascimento[i], email_paciente[i], cpf_paciente[i], e.estado[i], e.cidade[i], e.bairro[i], e.rua[i], e.numero[i], e.cep[i], telefone_paciente[i], outra_comorbidade[i], dia_nascimento[i], mes_nascimento[i], ano_nascimento[i], dia_diagnostico[i], mes_diagnostico[i], ano_diagnostico[i]);
                }
            }
            break;
        default:
            printf("\n                                                           Opção inválida.\n");
            break;
        }
        printf("\n                                                           Digite 1 para continuar pesquisando\n                                                           Digite 2 para voltar ao menu\n                                                           Digite 3 para fechar o sistema\n                                                           ");
        scanf("%d", &op);
    }while(op == 1);
    if(op == 2){
        menu();
    }
}

void login(){
        char login[15] = "sistema_medico";
        char login1[15];
        char senha[15] = "sistema_medico";
        char senha1[15];
        int x;
    do {
        printf("\n                                                           *__@ U S E R *__ : ");
        scanf("%s", &login1);

        printf("                                                           ^___ P A S S W O R D __^ : ");
        scanf("%s", &senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0) {
        printf("\n\n                                                           LOGADO!\n\n");
        break;
        }else{

            printf("\n\n                                                           DADOS INVALIDOS!\n\n");
            x = 0;
        }
    }while(x == 0);
}

void cadastro() {
    static int linha;
    FILE * pont_arq;
    pont_arq = fopen("registros_medicos.txt", "w");
    do{
            printf("                                                           --- CADASTRAR PACIENTE COM COVID-19 ---");
            printf("\n                                                           Nome: ");
            scanf(" %[^\n]", &nome_paciente[linha]);
            printf("\n                                                           --- Data de Nascimento ---\n                                                           -----> Dia: ");
            scanf ("%d", &dia_nascimento[linha]);
            printf("\n                                                           -----> Mês: ");
            scanf ("%d", &mes_nascimento[linha]);
            printf("\n                                                           -----> Ano: ");
            scanf ("%d", &ano_nascimento[linha]);
            printf("\n                                                           ---                    ---\n                                                           --- Data do Diagnóstico ---\n                                                           ---> Dia: ");
            scanf ("%d", &dia_diagnostico[linha]);
            printf("\n                                                           -----> Mês: ");
            scanf ("%d", &mes_diagnostico[linha]);
            printf("\n                                                           -----> Ano: ");
            scanf ("%d", &ano_diagnostico[linha]);
            printf("\n                                                           E-mail: ");
            scanf("%s", &email_paciente[linha]);
            printf("\n                                                           CPF (apenas números): ");
            scanf("%lld", &cpf_paciente[linha]);
            printf("\n                                                           Telefone (apenas números): ");
            scanf("%lld", &telefone_paciente[linha]);
            printf("\n                                                           Estado (UF/SIGLA): ");
            scanf(" %[^\n]", &e.estado[linha]);
            printf("\n                                                           Cidade: ");
            scanf(" %[^\n]", &e.cidade[linha]);
            printf("\n                                                           Bairro: ");
            scanf(" %[^\n]", &e.bairro[linha]);
            printf("\n                                                           Rua: ");
            scanf(" %[^\n]", &e.rua[linha]);
            printf("\n                                                           Número da Casa: ");
            scanf("%s", &e.numero[linha]);
            printf("\n                                                           Cep: ");
            scanf("%s", &e.cep[linha]);
            printf("\n                                                           O paciente possui outra comorbidade? (S/N): ");
            scanf ("%s", &op_1);
            if ((strcmp(op_1, "s") == 0) || (strcmp(op_1, "S") == 0)){
                printf("\n                                                           Comorbidade: ");
                scanf(" %[^\n]", &outra_comorbidade[linha]);

            }else if ((strcmp(op_1, "n") == 0) || (strcmp(op_1, "N") == 0)) {
                strcpy(outra_comorbidade[linha], "Não há outras comorbidades");
            }else{
            strcpy(outra_comorbidade[linha], "Informação inválida.");
            }
            int idade = ano_diagnostico[linha] - ano_nascimento[linha];
            if ((strcmp(op_1, "s") == 0) || (strcmp(op_1, "S") == 0) || idade >= 60 || idade <= 5) {
                printf("\n                                                           GRUPO DE RISCO! DIGITE 'S' PARA ENVIAR DADOS À SECRETARIA: ");
                scanf("%s", &op_4[linha]);
                    if ((strcmp(op_4, "s") == 0) || (strcmp(op_4, "S") == 0)){
                        printf("\n                                                           Enviando dados...\n                                                           Dados enviados!\n");
                    }else {
                                printf("\n                                                           Envio cancelado! . . . \n\n");

                    }
            }
            printf("\n                                                           Digite S para salvar os dados do paciente ou outro valor para não salvar: ");
            scanf ("%s", &op_2);
            if ((strcmp(op_2, "s") == 0) || (strcmp(op_2, "S") == 0))
            {
                fprintf(pont_arq, "--- CADASTRAR PACIENTE COM COVID-19 ---");
                fprintf(pont_arq, "\nNome: %s", nome_paciente[linha]);
                fprintf(pont_arq, "\nEstado: %s", e.estado[linha]);
                fprintf(pont_arq, "\nCidade: %s", e.cidade[linha]);
                fprintf(pont_arq, "\nBairro: %s", e.bairro[linha]);
                fprintf(pont_arq, "\nRua: %s", e.rua[linha]);
                fprintf(pont_arq, "\nNúmero da Casa: %s", e.numero[linha]);
                fprintf(pont_arq, "\nCep: %s", e.cep[linha]);
                fprintf(pont_arq, "\nIdade: %d anos", ano_diagnostico[linha] - ano_nascimento[linha]);
                fprintf(pont_arq, "\nOutra comorbidade: %s", outra_comorbidade[linha]);
                fprintf(pont_arq, "\nData de Nascimento: %2d/%2d/%3d", dia_nascimento[linha], mes_nascimento[linha], ano_nascimento[linha]);
                fprintf(pont_arq, "\nData de Diagnótico: %2d/%2d/%3d", dia_diagnostico[linha], mes_diagnostico[linha], ano_diagnostico[linha]);
                fprintf(pont_arq, "\nEmail: %s", email_paciente[linha]);
                fprintf(pont_arq, "\nCPF: %lld", cpf_paciente[linha]);
                fprintf(pont_arq, "\nTelefone: %lld", telefone_paciente[linha]);
                fprintf(pont_arq, "\n---------------------------------------------------------\n\n");
            }
            printf("\n                                                           Digite 1 para continuar cadastrando\n                                                           Digite 2 para voltar ao menu\n                                                           Digite 3 para fechar o programa\n                                                           ");
            scanf("%d", &op);
            linha++;
    }while(op == 1);
    if(op == 2){
        fclose(pont_arq);
        menu();
    }
}
void menu(){
    int op_2;

    printf("\n                                                           1 - Cadastrar paciente com Covid-19\n                                                           2 - Pesquisar por registros médicos\n                                                           3 - Enviar dados à secretaria\n                                                           4 - Sair\n                                                           ");
    scanf("%d", &op_2);
    if (op_2 == 1){
        cadastro();
    } else if (op_2 == 2){
        pesquisa();
    }else if (op_2 == 3) {
    printf("\n                                                           Deseja enviar os dados de seu sistema médico à secretaria estadual de saúde? (S/N)\n                                                           ");
    scanf ("%s", &op_3);
    if ((strcmp(op_3, "s") == 0) || (strcmp(op_3, "S") == 0)){
            printf("\n                                                           Enviando dados...\n                                                           Dados enviados!\n");
            menu();
    } else if ((strcmp(op_3, "n") == 0) || (strcmp(op_3, "N") == 0)){
        printf("\n                                                           Envio cancelado! Retornando ao menu...\n\n");
        menu();
    }
    }
}

void introducao() {
    printf("[+====================================================================================================================================================================+]\n\n");
    printf("                                                     <>===<>===<>--- M E N U  P R I N C I P A L ---<>===<>===<>                \n\n");
    printf(".....................................................      +         ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨       +       .........................................................\n\n");
    printf("..................................................... U $ U 4 R I O  ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ P 4 S S W 0 R D .........................................................\n\n");
    printf(".....................................................      +         ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨       +       .........................................................\n\n");
    printf("[+====================================================================================================================================================================+]\n\n");
    printf("\n                                                           Evite acentuação ou caracteres especiais ao responder os formulários desta aplicação\n\n");
}
