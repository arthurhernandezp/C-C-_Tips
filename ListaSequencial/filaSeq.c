/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define max 6

typedef struct filaSeq{
    int valores[max];
    int inicio,fim,n;
}filaSeq;

void constroiFila(filaSeq *F){
    F->inicio = -1;
    F->fim = -1;
    F->n = 0;
}

int filaCheia(filaSeq F){
    return (F.n == max);
}

int filaVazia(filaSeq F){
    return (F.n == 0);
}

void inserir(filaSeq *F, int valor){
    if(!filaCheia(*F)){
        if(F->inicio == -1){
            (F->inicio)++;
        }
       
        printf("O valor %d foi inserido+++\n",valor);

        if(F->fim == max-1){
            F->fim = 0;
        }
        else{
            (F->fim)++;
        }

        F->valores[F->fim] = valor;
        (F->n)++;
    }
    else{
        printf("Fila Cheia!!!\n");
    }
}

void remover(filaSeq *F){
    if(!filaVazia(*F)){
        printf("O valor %d foi removido---\n",F->valores[F->inicio]);
        if(F->inicio == (max - 1)){
            F->inicio = 0;
        }
        else{
             (F->inicio)++;
        }
        (F->n)--;
    }
    else{
        printf("A fila está vazia!!!!\n");
    }
}

void mostraProximo(filaSeq F){
    printf("Proximo elemento a ser removido e: %d\n", F.valores[F.inicio]);
}
void mostraUltimo(filaSeq F){
    printf("Ultimo elemento a ser removido e: %d\n", F.valores[F.fim]);
}

int main()
{
    filaSeq fila;
    constroiFila(&fila);
    inserir(&fila,5);
    inserir(&fila,3);
    inserir(&fila,1);
    mostraProximo(fila);
    mostraUltimo(fila);
    inserir(&fila,10);
    mostraUltimo(fila);
    inserir(&fila,0);
    remover(&fila);
    mostraProximo(fila);
    inserir(&fila,44);
    mostraProximo;
    mostraUltimo;
    inserir(&fila,15);
    remover(&fila);
    remover(&fila);
    remover(&fila);
    remover(&fila);
    remover(&fila);
    remover(&fila);
    remover(&fila);
    return 0;
}
