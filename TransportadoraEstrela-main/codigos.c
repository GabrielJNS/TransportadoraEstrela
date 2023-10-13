#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include "cabecalho.h"

//FUNÇÂO QUE CALCULA O GRAU DE SATISFAÇÂO//
int grau_satisfa(int a,int b,int c,int d,int e,int f,int g){
int total;
total=a+b+c+d+e+f+g;
printf("Total:%d\n\n",total);
return total;
}

//CONDIÇÂO//
int condicao(int a){
if(a==1)
    a=40;
if(a==2)
    a=60;
if(a==3)
    a=80;
if(a==4)
    a=100;
return a;
}

//CONDIÇÂO FINAL//
int condicao_final(int a){
    if(a<=280)
        printf("Cliente Totalmente Insatisfeito com a Empresa\n");
    if(a>280 && a<=420)
        printf("Cliente Satisfeito com a Empresa\n");
    if(a>420)
        printf("Cliente Extremamente satisfeito com a Empresa\n");

return a;

}

//EXIBIÇÂO DOS DADOS NA TELA//
void imprimir(questionario **c, int quant){
    int i;
    printf("\n\t\tLista de Cadastrados:\n");
    printf("\t--------------------------------\n");
    for(i = 0; i < quant; i++){
        printf("Número de Cadastro: %d\n", i+1);
        printf("Nome: %s\n", c[i]->nome);
        printf("Avaliador: %s\n", c[i]->avaliador);
        printf("Média de Avaliação: %d\n\n", condicao_final(c[i]->total));



    }
    printf("\t--------------------------------\n");
    system("pause");
            system("cls");
}

//CADASTRANDO DADOS//

int cadastrar_contato(questionario **c, int quant, int tam){
int total;
int teste;
char letra;
        if(quant < tam){
        questionario *novo = malloc(sizeof(questionario));
        getchar();
        printf("\tDigite seu Nome:");
        gets(novo->nome);
        printf("\n\tDigite o nome do AVALIADOR:");
        gets(novo->avaliador);
                do{printf("\n\t\t\tTempo de atendimento:\n\t\t\tEnumere de acordo sua satisfação\n\tRuim (0), Regular (1), Bom (2), Muito Bom (3) e Ótimo (4)\n");
                printf("\n\tEscolha:");
                teste = scanf("%d", &novo->tempo);
                do{
                        letra=getchar();
                    }while(letra!='\n');

                if(novo->tempo>4 || novo->tempo<0 || teste==0){
                    printf("\n\n\t\t\t\tOpção Inválida\n");
                    }
                }while(novo->tempo>4 || novo->tempo<0 || teste==0);

                do{printf("\n\t\t\tEducação do Vendedor:\n\t\t\tEnumere de acordo sua satisfação\n\tRuim (0), Regular (1), Bom (2), Muito Bom (3) e Ótimo (4)\n");
                printf("\n\tEscolha:");
                teste=scanf("%d", &novo->edu);
                do{
                    letra=getchar();
                }while(letra!='\n');
                if(novo->edu>4 || novo->edu<0 || teste==0)
                    printf("\n\n\t\t\t\tOpção Inválida\n");
                }while(novo->edu>4 || novo->edu<0 || teste==0);

                do{printf("\n\t\t\tClareza das informações prestadas:\n\t\t\tEnumere de acordo sua satisfação\n\tRuim (0), Regular (1), Bom (2), Muito Bom (3) e Ótimo (4)\n");
                printf("\n\tEscolha:");
                teste=scanf("%d", &novo->clareza);
                do{
                    letra=getchar();
                }while(letra!='\n');
                if(novo->clareza>4 || novo->clareza<0 || teste==0)
                    printf("\n\n\t\t\t\tOpção Inválida\n");
                }while(novo->clareza>4 || novo->clareza<0 || teste==0);

                do{printf("\n\t\t\tInstruções claras e corretas sobre a entrega:\n\t\t\tEnumere de acordo sua satisfação\n\tRuim (0), Regular (1), Bom (2), Muito Bom (3) e Ótimo (4)\n");
                printf("\n\tEscolha:");
                teste=scanf("%d", &novo->insentrega);
                do{
                    letra=getchar();
                }while(letra!='\n');
                if(novo->insentrega>4 || novo->insentrega<0 || teste==0)
                    printf("\n\n\t\t\t\tOpção Inválida\n");
                }while(novo->insentrega>4 || novo->insentrega<0 || teste==0);

                do{printf("\n\t\t\tInstruções claras e corretas sobre a montagem:\n\t\t\tEnumere de acordo sua satisfação\n\tRuim (0), Regular (1), Bom (2), Muito Bom (3) e Ótimo (4)\n");
                printf("\n\tEscolha:");
                teste=scanf("%d", &novo->insmonta);
                do{
                    letra=getchar();
                }while(letra!='\n');
                if(novo->insmonta>4 || novo->insmonta<0 || teste==0)
                    printf("\n\n\t\t\t\tOpção Inválida\n");
                }while(novo->insmonta>4 || novo->insmonta<0 || teste==0);

                do{printf("\n\t\t\tAtendimento do entregador:\n\t\t\tEnumere de acordo sua satisfação\n\tRuim (0), Regular (1), Bom (2), Muito Bom (3) e Ótimo (4)\n");
                printf("\n\tEscolha:");
                teste=scanf("%d", &novo->atendimento);
                do{
                    letra=getchar();
                }while(letra!='\n');
                if(novo->atendimento>4 || novo->atendimento<0 || teste==0)
                    printf("\n\n\t\t\t\tOpção Inválida\n");
                }while(novo->atendimento>4 || novo->atendimento<0 || teste==0);

                do{printf("\n\t\t\tConformidade da entrega:\n\t\t\tEnumere de acordo sua satisfação\n\tRuim (0), Regular (1), Bom (2), Muito Bom (3) e Ótimo (4)\n");
                printf("\n\tEscolha:");
                teste= scanf("%d", &novo->conformidade);
                do{
                    letra=getchar();
                }while(letra!='\n');
                if(novo->conformidade>4 || novo->conformidade<0 || teste==0)
                    printf("\n\n\t\t\t\tOpção Inválida\n");
                }while(novo->conformidade>4 || novo->conformidade<0 || teste==0);
                printf("\n\n");
                c[quant] = novo;
                //Condição Final//
                novo->total=condicao_final(grau_satisfa(condicao(novo->atendimento),condicao(novo->clareza),condicao(novo->conformidade),condicao(novo->edu),condicao(novo->insentrega),condicao(novo->insmonta),condicao(novo->tempo)));

            return 1;
        }
        else{
            printf("\n\tImpossivel novo cadastro. Vetor cheio!\n");
        }
        return 0;

}

//FUNÇÂO SALVANDO//
void salvar(questionario **c, int quant, char arq[]){
    FILE *file = fopen(arq, "w");
    int i;
    if(file){
        fprintf(file, "%d\n", quant);
        for(i = 0; i < quant; i++){
            fputs(c[i]->nome, file);
            fputc('\n', file);
            fprintf(file, "%s", c[i]->avaliador);
            fputc('\n', file);
            fprintf(file, "%d", c[i]->total);
            fputc('\n', file);
        }
        fclose(file);
    }
    else
        printf("\n\tNAO FOI POSSIVEL ABRIR/CRIAR O ARQUIVO!\n");
}

//FUNÇÂO CARREGAR//
int ler_arquivo(questionario **c, char arq[]){


    FILE *file = fopen(arq, "r");
    int quant = 0, i;
    questionario *novo = malloc(sizeof(questionario));
    if(file){
        fscanf(file, "%d\n", &quant);
        for(i = 0; i < quant; i++){
            c[i] = novo;
            fscanf(file, "%50[^\n]", novo->nome);
            fputc('\n',file);
            fscanf(file, "%50[^\n]", novo->avaliador);
            fputc('\n',file);
            fscanf(file,"%d", &novo->total);
            fputc('\n', file);
            novo = malloc(sizeof(questionario));

        }
        fclose(file);
    }
    else
        printf("\n\tNAO FOI POSSIVEL ABRIR/CRIAR O ARQUIVO!\n");
    return quant;
}
