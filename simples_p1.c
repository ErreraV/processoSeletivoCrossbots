#include <stdio.h>
int main()
{
    int v[10];
    int x, y;
    int i;
    printf("digite 10 numeros:\n");
    /*recebe a lista*/
    for (i=0;i<10;i++){
        printf("%d ",i+1);
        scanf("%d",&v[i]);
    }
    printf("digite 2 posi��es:\n");
    /*recebe as posi��es*/
    scanf("%d %d", &x, &y);
    /*garante que as posi��es s�o validas*/
    if( x<=10 && y<=10){
        printf("a soma e %d", v[x-1]+v[y-1]);
    }
    else{
        printf("posicao invalida");
    }

    return 0;
}
