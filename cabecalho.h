#ifndef CABECALHO_H_INCLUDED
#define CABECALHO_H_INCLUDED

typedef struct{
char nome[50];
char avaliador[50];
int telefone[20];
int tempo;
int edu;
int clareza;
int insentrega;
int insmonta;
int atendimento;
int conformidade;
int total;
char avalia[50];
}questionario;

int grau_satisfa(int a,int b,int c,int d,int e,int f,int g);

int condicao(int a);

int condicao_final(int a);

int cadastrar_contato(questionario **c, int quant, int tam);

void salvar(questionario **c, int quant, char arq[]);

int ler_arquivo(questionario **c, char arq[]);

void imprimir(questionario **c, int quant);

#endif // CABECALHO_H_INCLUDED
