#include<stdio.h>
#include<stdlib.h>
int main(){
  srand((unsigned)time(NULL)); //난수 발생기 시드 설저
  int answer = rand()%100; //정답을 난수로 발생한다
  int guess;
  int tries = 0;
  //
  do
  {
    printf("값을 입력해주세요.");
    scanf("%d",&guess);
    if (guess<answer)
    {
      printf("숫자가 낮다고 출력한다.\n");
      tries++;
    }
    if (guess>answer)
    {
      printf("숫자가 높다고 출력한다.\n");
      tries++;
    }
  } while (guess!=answer);
  printf("축하합니다. 횟수 : %d", tries);
  
}