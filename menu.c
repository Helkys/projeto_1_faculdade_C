#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int vet_ori[10];
void tela(){
    printf("\t---------------- MENU -----------------\n");
    printf("\t|   ESCOLHA UMA OPÇÃO ABAIXO\n\t|\n");
    printf("\t|[1] - GERAR 10 NÚMEROS ALEATÓRIO.\n");
    printf("\t|[2] - MOSTRAR O MAIOR NÚMERO DO VETOR.\n");
    printf("\t|[3] - CONTAR QUANTOS NÚMEROS SÃO PAR.\n");
    printf("\t|[4] - SOMAR TODOS OS ELEMENTOS DO VETOR.\n");
    printf("\t|[5] - MOSTRAR O VETOR NA ORDEM INVERSA.\n");
    printf("\t|[6] - MOSTRAR VETOR NA ORDEM CRESENTE.\n");
    printf("\t|[7] - LIMPAR TELA.\n");
    printf("\t|[8] - SAIR.\n");
    printf("\t----------------------------------------\n");
}
void preencher(){
    srand(time(NULL));
    for(int l = 0;l < 10;l++){
        vet_ori[l] = rand()%100;
    }
    for(int l = 0;l < 10;l++){
        printf("%d-(%d) ", l+1, vet_ori[l]);
        Sleep(1);
    }
    printf("\n");
}
void main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int opcao, end = 0;
    tela();
    while (end == 0){
        printf("Informe a opção: ");
        scanf("%d", &opcao);
        switch (opcao){
        case 1:
            preencher();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            system("cls");
            tela();
            break;
        case 8:
            end = 1;
            printf("ENCERRADO... AGUARDE...\n");
            Sleep(4000);
            break;
        default:
            printf("Opção inválida!!!\a\n");
            Sleep(2000);
            break;
        }
    }
    SetConsoleOutputCP(CPAGE_DEFAULT);
}