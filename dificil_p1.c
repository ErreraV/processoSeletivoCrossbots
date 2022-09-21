#include "stack.h"//biblioteca de pilhas do minneto
int conta_diamantes(char* teste){
    Stack *s = create(strlen(teste));
    int nDiamantes = 0;
    int i=0;

    while (teste[i] != '\0') {
    	if ( teste[i]=='<')
			push(s, teste[i]);
		if( teste[i]=='>' && !empty(s)){
            nDiamantes++;
            pop(s);
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
    scanf("%d",&N);
    testes = (char**)malloc(sizeof(char*)*N);
    for(i=0;i<N;i++){
        testes[i]=(char*)malloc(sizeof(char)*1000);
        scanf("%s",testes[i]);
    }
    for(i=0;i<N;i++){
        printf("%d", conta_diamantes(testes[i]));
    }

    return 0;
}
