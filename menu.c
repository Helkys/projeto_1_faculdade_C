#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int vet_ori[], init = 0, maior = 0, num_par = 0, soma = 0, aux = 0;
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
    printf("Gerando números...Aguarde...\n");
    //Sleep(3000);
    srand(time(NULL));
    for(int l = 0;l < 10;l++){
        vet_ori[l] = rand()%100;
    }
    for(int l = 0;l < 10;l++){
        printf("%d-(%d) ", l+1, vet_ori[l]);
        //Sleep(500);
    }
    printf("\n----------------------------------------------\n");
}
void maior_elem(){
    if(init == 0){
        printf("Por favor prencher o vetor usando a opção 1.\n");
        //Sleep(2000);
    } else{
        printf("Analisando vetor...Aguarde...\n");
        //Sleep(3000);
        for(int l = 0; l < 10; l++){
            if(l == 0){
                maior = vet_ori[l];
            } else{
                if(vet_ori[l] > maior){
                    maior = vet_ori[l];
                }
            }
        }
        printf("O maior elemento do vetor é %d.\n", maior);
        printf("----------------------------------------------\n");
    }
}
void elem_par(){
    num_par = 0;
    if(init == 0){
        printf("Por favor prencher o vetor usando a opção 1.\n");
        //leep(2000);
    } else{
        printf("Analisando vetor...Aguarde...\n");
        //Sleep(3000);
        printf("Número(s) pare(s) no vetor:\n");
        for(int l = 0;l < 10;l++){
            if(vet_ori[l]%2 == 0){
                num_par++;
                //Sleep(500);
                printf("%d-[%d] ", l+1, vet_ori[l]);
            }
        }
        printf("\nTemos %d número(s) pare(s) no vetor.\n", num_par);
        printf("----------------------------------------------\n");
    }
}
void soma_elem(){
    if(init == 0){
        printf("Por favor prencher o vetor usando a opção 1.\n");
        //Sleep(2000);
    } else{
       
        printf("Somando os elementos... Aguarde...\n");
        //Sleep(3000);
        for(int l = 0;l < 10;l++){
            soma += vet_ori[l];
        }
        printf("Soma total dos elementos do vetor. TOTAL: %d\n", soma);
        printf("----------------------------------------------\n");
    }
}
void ordem_cres(){
    if(init == 0){
        printf("Por favor prencher o vetor usando a opção 1.\n");
        //Sleep(2000);
    } else{
        printf("Organizando vetor na ordem crescente... Aguarde...\n");
        //Sleep(3000);
        for(int l = 0; l < 10-1; l++){
            for(int s = l+1; s < 10; s++){
                if(vet_ori[l] > vet_ori[s]){
                    aux = vet_ori[l];// Isso é o swap
                    vet_ori[l] = vet_ori[s];
                    vet_ori[s] = aux;
                }
            }
        }
        for(int l = 0;l < 10;l++){
           //Sleep(500);
            printf("%d-[%d] ", l+1, vet_ori[l]);
        }
        printf("\n----------------------------------------------\n");
    }
}
void ordem_inv(){
    int i = 0, f = 9; 
    if(init == 0){
        printf("Por favor prencher o vetor usando a opção 1.\n");
        //Sleep(2000);
    }else{
        while (i < f){
           aux = vet_ori[i];
           vet_ori[i] = vet_ori[f];
           vet_ori[f] = aux;
           i++;
           f--;
        }
        for(int l = 0; l < 10;l++){
            printf("%d-[%d] ", l+1, vet_ori[l]);
        }
        printf("\n----------------------------------------------\n");
    }
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
            init++;
            preencher();
            break;
        case 2:
            maior_elem();
            break;
        case 3:
            elem_par();
            break;
        case 4:
            soma_elem();
            break;
        case 5:
            ordem_inv();
            break;
        case 6:
            ordem_cres();
            break;
        case 7:
            system("cls");
            init = 0;
            tela();
            break;
        case 8:
            end = 1;
            printf("ENCERRADO... AGUARDE...\n");
            //Sleep(4000);
            break;
        default:
            printf("Opção inválida!!!\a\n");
            //Sleep(2000);
            break;
        }
    }
    SetConsoleOutputCP(CPAGE_DEFAULT);
}