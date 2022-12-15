/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define max 6

typedef struct pilhaSeq{
    int valores[max];
    int topo;
}pilhaSeq;

void constroiPilha(pilhaSeq *P){
    P->topo = -1;
}

int pilhaVazia(pilhaSeq P){
    return(P.topo == -1);
}

int pilhaCheia(pilhaSeq P){
    return(P.topo == max-1);
}

void empilha(pilhaSeq *P, int n){
    if(!pilhaCheia(*P)){
        (P->topo)++;
        P->valores[P->topo] = n;
        printf("%d foi empilhado!\n",n);
    }
    else{
        printf("Pilha Cheia!!!\n");
    }
}

void desempilha(pilhaSeq *P){
    if(!pilhaVazia(*P)){
        printf("O numero %d foi removido!!\n",P->valores[P->topo]);
        (P->topo)--;
    }
    else{
        printf("A pilha esta vazia!!!\n");
    }
}

void mostrarTopo(pilhaSeq P){
    printf("\nO topo da pilha e: %d \n",P.valores[P.topo]);
}

int main()
{
    pilhaSeq pilha;
    constroiPilha(&pilha);
    empilha(&pilha,5);
    empilha(&pilha,2);
    empilha(&pilha,1);
    mostrarTopo(pilha);
    empilha(&pilha,4);
    mostrarTopo(pilha);
    desempilha(&pilha);
    desempilha(&pilha);
    mostrarTopo(pilha);
    empilha(&pilha,3);
    mostrarTopo(pilha);
    return 0;
}
