## LAB: 동전 던지기 게임
```c
#include<stdio.h>
#include<stdlib.h>//srand, rand 함수    
#include<time.h>//time 함수

int coin_toss(void); //함수 원형 선언

int main(void){

  int toss; // 동전 카운터
  int heads = 0; // 앞면
  int tails = 0; // 뒷면
  
  srand((unsigned)time(NULL)); //time 을 seed로가지고 있는 srand() 함수

  for (toss = 0; toss < 100; toss++) // 동전을 100번 던진다.
  {
    if(coin_toss() == 1){ //coin_toss을 호출하여 반환한 값이 1인지 비교한다.
      heads++; // 앞면이면 heads 1증가
    }
    else{
      tails++; // 뒷면이면  tails 1증가
    }
  }
      printf("동전의 앞면: %d \n", heads); //총 앞면 값 출력
      printf("동전의 뒷면: %d \n", tails); //총 뒷면 값 출력
      return 0;
}
int coin_toss(void){ //함수 정의

  int head = rand() %2;//랜덤 으로 나온 값을 2 나눈 나머지 값을 head 로 넣는다
  return head; //head 값을 반환 한다.
}
```
