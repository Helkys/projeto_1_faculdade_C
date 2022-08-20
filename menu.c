#include <stdio.h>
#include <windows.h>

int vet_ori[10];
void main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int opcao, end = 0;

  
    
    while (end == 0){
        system("cls");
        printf("\t---------------- MENU -----------------\n");
        printf("\t|   ESCOLHA UMA OPÇÃO ABAIXO\n\t|\n");
        printf("\t|[1] - GERAR 10 NÚMEROS ALEATÓRIO.\n");
        printf("\t|[2] - MOSTRAR O MAIOR NÚMERO DO VETOR.\n");
        printf("\t|[3] - CONTAR QUANTOS NÚMEROS SÃO PAR.\n");
        printf("\t|[4] - SOMAR TODOS OS ELEMENTOS DO VETOR.\n");
        printf("\t|[5] - MOSTRAR O VETOR NA ORDEM INVERSA.\n");
        printf("\t|[6] - MOSTRAR VETOR NA ORDEM CRESENTE.\n");
        printf("\t|[7] - SAIR.\n");
        printf("\t----------------------------------------\n");
        printf("Informe a opção: ");
        scanf("%d", &opcao);
        switch (opcao){
        case 1:
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