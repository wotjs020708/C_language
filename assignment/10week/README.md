## LAB: 동전 던지기 게임
* 동전을 100번 던져서 앞면이 나오는 횟수와 뒤션이 나오는 회수를 출력한다.
```c
#include<stdio.h>// 표준 입출력 함수를 위한 헤더 파일
#include<stdlib.h>// 일반 유틸리티 함수를 위한 헤더 파일 srand,rand 함수
#include<time.h>// 시간 관련 함수를 위한 헤더 파일 time 

int coin_toss(void); //함수 원형 선언

int main(void){

  int toss; // 동전 카운터
  int heads = 0; // 앞면
  int tails = 0; // 뒷면
  
  srand((unsigned)time(NULL)); //time 을 seed로가지고 있는 srand() 함수

  for (toss = 0; toss < 100; toss++) // 동전을 100번 던진다.
  {
    if(coin_toss() == 1){ //coin_toss을 호출하여 반환한 값이 1 이면
      heads++; // 앞면이면 heads 1증가
    }
    else{ //coint_toss을 호출하여 반환한 값이 1이 아니면
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

### LAB : 자동차 게임
* 난수를 이용하여서 자동차 게임을 작성해보자.
#### 알고리즘
1. 난수 발생기를 초기화 한다.
2. for(i=0; i<주행시간; i++)
3.  난수를 발생하여서 자동차1의 주행거리에 누적한다.
4.  난수를 발생하여서 자동차2의 주행거리에 누적한다.
5.  disp_car()를 호출하여서 자동차1을 화면에 *표를 그린다.
6.  disp_car()를 호출하여서 자동차2을 화면에 *표를 그린다.

```c
#include<stdio.h> // 표준 입출력 함수를 위한 헤더 파일
#include<stdlib.h> // 일반 유틸리티 함수를 위한 헤더 파일
#include<conio.h> // 콘솔 입출력 함수를 위한 헤더 파일
#include<time.h> // 시간 관련 함수를 위한 헤더 파일
void disp_car(int car_number, int distance){
  int i;
  printf("CAR#%d:", car_number);
  for (i = 0; i < distance/10; i++)//매개변수 distance 값을 10으로 나눈 몫 만큼 * 출력
  {
    printf("*");
  }
  printf("\n");
}

int main(void){
  int i;
  int car1_dist=0, car2_dist=0;
  srand((unsigned)time(NULL));// 난수 발생기 초기화

  for (i = 0; i < 6; i++)// 주행시간 6으로 지정
  {
    car1_dist+= rand() % 100;//자동차1의 거리를 무작위로 증가
    car2_dist+= rand() % 100;//자동차2의 거리를 무작위로 증가
    disp_car(1, car1_dist);//disp_car 함수 호출 자동차1의 위치를 표시
    disp_car(2, car2_dist);//disp_car 함수 호출 자동차2의 위치를 표시
  
    printf("------------------\n");
    _getch; //사용자가 키를 누를 때까지 대기
  }
  return 0;
}
```
### 도전과제
* 자동차를 3개로 늘려보자

```c
#include<stdio.h> // 표준 입출력 함수를 위한 헤더 파일
#include<stdlib.h> // 일반 유틸리티 함수를 위한 헤더 파일
#include<conio.h> // 콘솔 입출력 함수를 위한 헤더 파일
#include<time.h> // 시간 관련 함수를 위한 헤더 파일
void disp_car(int car_number, int distance){
  int i;
  printf("CAR#%d:", car_number);
  for (i = 0; i < distance/10; i++)//매개변수 distance 값을 10으로 나눈 몫 만큼 * 출력
  {
    printf("*");
  }
  printf("\n");
}

int main(void){
  int i;
  int car1_dist=0, car2_dist=0, car3_dist=0;
  srand((unsigned)time(NULL));// 난수 발생기 초기화

  for (i = 0; i < 6; i++)// 주행시간 6으로 지정
  {
    car1_dist+= rand() % 100;//자동차1의 거리를 무작위로 증가
    car2_dist+= rand() % 100;//자동차2의 거리를 무작위로 증가
    car3_dist+= rand() % 100;//자동차3의 거리를 무작위로 증가
    disp_car(1, car1_dist);//disp_car 함수 호출 자동차1의 위치를 표시
    disp_car(2, car2_dist);//disp_car 함수 호출 자동차2의 위치를 표시
    disp_car(3, car3_dist);//disp_car 함수 호출 자동차3의 위치를 표시
    printf("------------------\n");
    _getch; //사용자가 키를 누를 때까지 대기
  }
  return 0;
}
```
