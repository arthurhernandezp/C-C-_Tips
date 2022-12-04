#include <stdio.h>
#include <stdlib.h>

void lerNum(int* n){
    printf("Digite o numero desejado: ");
    scanf("%d",n);
}
 
int main(){
    int n;  
    lerNum(&n);
    return 0;
}
