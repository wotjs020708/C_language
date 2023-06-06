#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int max(int x, int y){

  return (x>y)?x:y;
}

int main(){
  int x, y, larger;
  printf("정수 2개를 입력하시요 : ");
  scanf("%d %d", &x, &y);
  larger = max(x,y);
  printf("더 큰 값은 %d입니다.", larger);
  return 0;
}