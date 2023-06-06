#include<stdio.h>

int main (void){

  int a;
  printf("정수를 입력하시오: ");
  scanf("%d",&a);
  if (a%2 == 0)
  {
    printf("일력된 정수는 짝수입니다.");
  }
  else
  {
    printf("입력된 정수는 홀수입니다.");
  }
  

}