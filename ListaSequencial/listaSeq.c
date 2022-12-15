/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define max 6
typedef struct listaSeq{
    int valores[max];
    int n;//sendo o numero de elementos na lista
}listaSeq;

void constroi(listaSeq *L){
    L->n = 0;
}

void imprimeLista(listaSeq L){
    for(int i = 0; i < L.n; i++){
        printf("%d ", L.valores[i]);
    }
}

int listaCheia(listaSeq L){
    return (L.n == max);
}

int listaVazia(listaSeq L){
    return (L.n == 0);
}

void insereLista(listaSeq *L, int n){
    if(!listaCheia(*L)){
        L->valores[L->n] = n;
        (L->n)++;
        printf("O valor %d foi inserido \n",n);
    }
    else{
        printf("Lista cheia!\n");
    }
}

int buscaElemento(listaSeq L, int num){
    if(!listaVazia(L)){
        for(int i = 0; i < L.n; i++){
          //  printf("Valores[i]: %d",L.valores[i]);
            if(L.valores[i] == num){
                return i;
            }
        }
        return -1;
    }  
    else{
        printf("\nlista Vazia!!!");
        return 0;
    }
    
}

void removeElemento(listaSeq *L, int n){
    int posicao = buscaElemento(*L,n);
    
    if(posicao > 0){
        printf("\nElemento %d foi removido!!!\n",L->valores[posicao]);

        L->valores[posicao] = L->valores[L->n - 1];
        (L->n)--;
    }   
    else if(posicao < 0){
        printf("\nElemento nao encontrado!!!\n");
    }
}

int main()
{
    listaSeq lista;
    constroi(&lista);
    insereLista(&lista,3);
    insereLista(&lista,5);
    insereLista(&lista,1);
    insereLista(&lista,8);
    insereLista(&lista,9);
    insereLista(&lista,2);
    insereLista(&lista,10);
    imprimeLista(lista);
    removeElemento(&lista, 5);
    imprimeLista(lista);
    return 0;
}
