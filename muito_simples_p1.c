#include <stdio.h>
#include <math.h>
float distancia(float* p1, float* p2){
    float x;
    float y;
    float d;
    x = p1[0] - p2[0];

    y = p1[1] - p2[1];

    d = sqrt(x*x+y*y);

    return d;
}
int main(){
    float d;
    float d1[2] = {1, 2};
    float d2[2] = {5, 6};
    d = distancia(d1,d2);
    printf("%f", d);

    return 0;
}
