#include <stdio.h>

int q6(){

  int alunos, livros, media;

  scanf("%d\n%d", &livros, &alunos);

  media = alunos/livros;

  if(media<=8){
    printf("A");
  } else if(media>=9 && media<=12){
    printf("B");
      } else if(media>=13 && media<=18){
    printf("C");
      } else if(media>18){
    printf("D");
      }
  return 0;
}