#include <stdio.h>

int encontra_letra(char l, char* frase){
    int i;
    int n;
    n=0;
    //percorre o string aumentando o contador em 1 toda vez q a letra � encontrada
    for(i=0;frase[i]!='\0';i++){
        if(frase[i]==l){
            n++;
        }
    }
    return n;
}
int main()
{
    char* frase = ('a',"uma frase generica de quest�es de programa��o");
    int n;

    n = encontra_letra('a',frase);
    printf("%d",n);


    return 0;
}
