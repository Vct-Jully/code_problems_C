#include <stdio.h>

int q7() {

  int x, y;

  scanf("%d\n%d", &x, &y);

  if(x>y){
  printf("1\n");
  } else{
    printf("0\n");
  }
  if(x==y){
  printf("1\n");
  } else{
    printf("0\n");
  }
  if(x<y){
  printf("1\n");
  } else{
    printf("0\n");
  }
  if(x!=y){
  printf("1\n");
  } else{
    printf("0\n");
  }
  if(x>=y){
  printf("1\n");
  } else{
    printf("0\n");
  }
  if(x<=y){
  printf("1\n");
  } else{
    printf("0\n");
  }

	return 0;
}