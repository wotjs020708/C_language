#include<stdio.h>

int main(){
  int i=1, sum=0; //전역 변수
  while (i<=5)
  {
    int n; //지역 변수
    printf("값을 입력하시오 :");
    scanf("%d",&n);
    sum = sum + n;
    i++;
  }
  printf("합계는 %d 입니다.",sum);
  return 0;
  

}