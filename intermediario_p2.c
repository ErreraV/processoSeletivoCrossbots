#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define N 10
int* tira_repeticoes(int* list){
    int* aux;
    int i,j,k;
    int repetido;
    aux = (int*)malloc(sizeof(int)*(N+1));
    /*percorre o vetor testando para cada posição se o valor já esta presente no aux,
        quando não esta presente o valor é adicionado à proxima posição do vetor*/
    k=0;
    for(i=0;i<N;i++){
        repetido = 0;
        for(j=0;j<k;j++){
            if(aux[j] == list[i]){
                repetido = 1;

            }
        }
        if(!repetido){
            aux[k] = list[i];
            k++;
        }
    }

    aux[k] = INT_MIN;

    return aux;
}
int main()
{
    int* list;
    int i;
    list = (int*)malloc(sizeof(int)*N);
    printf("digite a lista:\n");
    for(i=0;i<N;i++){
        scanf("%d", &list[i]);
    }
    list = tira_repeticoes(list);
    for(i=0;list[i]!=INT_MIN;i++){
        printf("%d ",list[i]);
    }
    return 0;
}
