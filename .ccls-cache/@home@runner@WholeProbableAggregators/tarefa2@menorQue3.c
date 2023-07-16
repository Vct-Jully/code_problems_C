#include <stdio.h>

int q2() {
  int conjunto[3]= {}, i;
   scanf("%d\n%d\n%d", &conjunto[0], &conjunto[1], &conjunto[2]);
  int menor = conjunto[0];

  for(i=0; i<3; i++){
    if(menor>conjunto[i]){
      menor = conjunto[i];
    } 
  }
printf("%d", menor);
    
	return 0;
	
}