#include <stdio.h>
float converte_temperatura(float F){
    return (F-32)*5/9;//formula de conversão
}
int main(){
    printf("%f", converte_temperatura(-4));

    return 0;
}
