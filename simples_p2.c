#include <stdio.h>
int eh_perfeito(int n){
    int i;
    int s;
    s = 0;
    for(i = 1; i < n; i++){
        if(n%i == 0){
            s += i;
        }
    }
    if(s == n){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    if(eh_perfeito(n)){
        printf("eh perfeito\n");
    }
    else{
        printf("nao eh perfeito\n");
    }

    return 0;
}



