#include <stdio.h>
#include <math.h>
typedef struct{
    int x;
    int y;
} Coordenada;
float calcula_angulo(Coordenada A, Coordenada B, Coordenada C){
    float BA, BC;//tangente do �ngulo formado pelos vetores BA e BC em rela��o ao eixo X
    float ABC;//�ngulo formado pelos vetores BA e BC
    BA = (float)(A.y-B.y)/(A.x-B.x);
    BC = (float)(C.y-B.y)/(C.x-B.x);

    ABC = atan((float)(BA-BC)/(1+BA*BC));//calcula analiticamente a tangente do �ngulo e converte para o �ngulo atrav�s da fun��o atan

    if(ABC<=0){
        ABC*=-1;
    }
    return ABC;
}
int main()
{
    Coordenada A, B, C;
    float angulo;
    A.x=3.0;
    A.y=4.0;
    B.x=0.0;
    B.y=3.0;
    C.x=3.0;
    C.y=2.0;


    angulo = calcula_angulo(A,B,C);
    printf("%f",angulo);
}
