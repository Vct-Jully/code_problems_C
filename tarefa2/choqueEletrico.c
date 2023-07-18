#include <stdio.h>
#include <math.h>

int q4() {
  int l, potencia;
  scanf("%d", &l);

  if(l>=1 && l<=20){
  potencia= 20+(pow(l,3));
  } 
    else if(l>=21 && l<=40){
    potencia= 8000+pow((l-10),2);
  } 
      else if(l>=41 && l<=60){
       potencia= 9000+(5*l);
  } 
        else if(l>=61 && l<=80){
        potencia= 9300+(2*l);
  }        
          else if(l>=81 && l<=100){
          potencia= 9500+l;      
  } 
  printf("Potencia de : %d W", potencia);
  return 0;
}