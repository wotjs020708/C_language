#include<stdio.h>

int main(void){
  int n;
  int i=1;

  printf("출력하고 싶은 단 : ");
  scanf("%d",&n);

  while (1)
  {
    printf("%d * %d = %d\n",n,i,n*i);
    i++;
    if(i==10){
      break;
    }
  }
  return 0;
}