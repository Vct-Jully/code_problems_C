#include <stdio.h>

int q8() {

  int a, b, c;

  scanf("%d\n%d\n%d", &a, &b, &c);

  if(a==b && b==c){
    printf("equilatero");
  } 
  if((a==b || b==c || c==a) && (a!=c || a!=b || b!=c)){
    printf("isosceles");
  }
  if(!(a==b || b==c || a==c)){
     printf("escaleno");
  }
	return 0;
}