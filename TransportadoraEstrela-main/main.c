#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "cabecalho.h"

//MENU PRINCIPAL//
int main(){
    setlocale(LC_ALL, "portuguese");

    questionario *agenda[50];
    char arquivo[] = {"dados.txt"};
    int opcao, tam = 50, quant = 0;
    char letra;
    do{
            start:
        printf("--------------------------------------------------------------------------------------------------");
        printf("\n-----------------------TRANSPORTADORA ESTRELA-----------------------------------------------------\n");
        printf("--------------------------------------------------------------------------------------------------");
        printf("\n\t0 - Sair\n\t1 - Responder Questionário\n\t2 - Exibir Resultados\n\t3 - Salvar\n\t4 - Abrir arquivo\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        printf("\tOpção: ");
        int teste=scanf("%d", &opcao);
        if(teste==0){
           printf("Numero Inválido\n\n");


        do{
            letra=getchar();
        }while(letra!='\n');
    system("pause");
            system("cls");
    goto start;

        }
        switch(opcao){
        case 1:
            quant += cadastrar_contato(agenda, quant, tam);
            system("pause");
            system("cls");
            break;
        case 2:
            imprimir(agenda, quant);

            break;
        case 3:
            salvar(agenda, quant, arquivo);
            printf("Salvando...\n\n");
            system("pause");
            system("cls");
            break;
        case 4:
            quant = ler_arquivo(agenda, arquivo);
            printf("Abrindo Arquivo TXT...\n\n");
            system("pause");
            system("cls");
            break;
        default:
            if(opcao != 0)
              break;
        }
    }while(opcao != 0);
    printf("Saindo...\n\n");
    system("pause");
    return 0;
}

