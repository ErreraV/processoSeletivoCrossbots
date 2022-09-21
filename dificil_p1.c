#include <stdio.h>
int conta_diamantes(char* teste){
    int nDiamantesAbertos = 0;
    int nDiamantes = 0;
    int i=0;
    //percorre o string até o final
    while (teste[i] != '\0') {
    	//quando acha um '<' aumenta o numero de diamantes abertos
    	if ( teste[i]=='<')
			nDiamantesAbertos++;
        //quando acha um '>' aumenta o numero de diamantes que foram fechados e diminui o numero de abertos
		if( teste[i]=='>' && nDiamantesAbertos>0){
            nDiamantes++;
            nDiamantesAbertos--;
        }

		i++;
  	}

    return nDiamantes;
}
int main()
{
    char** testes;
    int N;
    int i;
    //recebe o numero de vetores e aloca um vetor de strings do tamanho desejado
    scanf("%d",&N);
    testes = (char**)malloc(sizeof(char*)*N);
    //aloca e recebe todos os strings
    for(i=0;i<N;i++){
        testes[i]=(char*)malloc(sizeof(char)*1000);
        scanf("%s",testes[i]);
    }
    //chama a função para todos os strings
    for(i=0;i<N;i++){
        printf("%d\n", conta_diamantes(testes[i]));
    }

    return 0;
}
