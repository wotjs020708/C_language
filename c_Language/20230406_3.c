#include<stdio.h>

int main(){
  int i=1, n, sum=0;
  printf("정수를 입력하시오 : ");
  scanf("%d",&n);
  while (i<=n)
  {
    sum= sum +i;
    i++;

    }
  printf("1 부터 %d까지의 합은 %d",n,sum);
  return 0;
  }