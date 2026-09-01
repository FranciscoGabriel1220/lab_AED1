#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l,float *area, float *perimetro){
    *area=((3*pow((double)l,2))*sqrt(3))/2;
    *perimetro=6*l;
    printf("a area e: %f\n", (double)(*area));
    printf("o perimetro e: %f\n", (double)(*perimetro));

}

int main (void){
    float la;
    float area, perimetro;
    float *parea = &area;
    float *pperimetro = &perimetro;
    
    printf("quantos lados ?");
    scanf("%f", &la);
calcula_hexagono(la, parea,pperimetro);
    return 0;
}