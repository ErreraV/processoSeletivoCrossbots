#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5
int* encontra_primo(int* l){
    int* aux;
    int i,j;
    int ehPrimo;
    int nPrimo=0;
    aux = (int*)malloc(sizeof(int)*(N+1));
    for(i=0;i<N;i++){
        ehPrimo = 1;
        //testa se os numeros são primos
        if(l[i]==0 || l[i]==1){
            ehPrimo = 0;
        }
        else{
            for(j=2;j<l[i] && ehPrimo;j++){
                if(l[i]%j==0){
                    ehPrimo = 0;
                }

            }
        }
        //se o numero for primo ele é colocado no vetor
        if(ehPrimo){
         aux[nPrimo] = l[i];
         nPrimo++;
        }
    }
    //a ultima posição do vetor é definida como -1 para evitar acesso indevido de memoria
    aux[nPrimo]=-1;
    return aux;
}
int main(){
    int i;
    int *lista;
    lista = (int*)malloc(sizeof(int)*N);
    printf("digite os numeros da lista:\n");
    for(i=0;i<N;i++){
        scanf("%d", &lista[i]);
    }
    lista = encontra_primo(lista);
    i=0;
    while(lista[i]!=-1){
        printf("%d ", lista[i]);
        i++;
    }
    printf("\n");



    return 0;
}
