#include <stdio.h>

int q1() {
    double codigo, quant, valorT;
    scanf("%lf\n%lf", &codigo, &quant);

if(codigo>0 && codigo<=4){
    if(codigo == 1){
        valorT = (quant * 5.30);
    }
    else if(codigo == 2){
    valorT= (quant*6.00);
    }
    else if(codigo == 3){
    valorT= (quant*3.20);
    }
    else if(codigo == 4){
    valorT= (quant*2.50);
    }
    }
	
	if(valorT >= 40 || quant >= 15){
	    valorT= (valorT - (valorT*0.15));
    printf("R$ %.2lf", valorT);
	} else{
    printf("R$ %.2lf", valorT);
  }
  return 0;
}