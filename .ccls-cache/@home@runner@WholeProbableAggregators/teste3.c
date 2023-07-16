#include <stdio.h>
#include <math.h>

int main(void) {
double areaT, areaTsecao, areaCsecao, areaC, cosSec, areaTotalI;
int raio, ladoA= 5, ladoB= 4, ladoC=3;

printf( "insira o valor do raio\n");
scanf ("%d", &raio);
printf("valor do raio:%d\n" , raio);
areaT = (ladoBladoC)/2;
areaC = 3.14 pow(raio, 2);
printf("areaC:82lf\n", areaC);
printf( "areaT:82lf \n", areaT);
double p;
p = (ladoA + ladoB + ladoC) /2;
areaTsecao = sqrt(p(p-ladoA)(p-ladoB) (p-ladoC) );// calculo da parte triangular da área de intersceção do triângulo
areaCsecao = (cosSec/ 360.0)*areaC;
printf( "área da seção Triangular:821f\n" , areaTsecao);
printf( "área da seção Circular :821f\n" , areaCsecao);
areaTotalI = areaTsecao + areaCsecao;
printf("área de Intersceção: 82lf\n" , areaTotalI);
return 0;
}