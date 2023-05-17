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
### 수학 함수 리라이브러리

```c
#include<stdio.h>
#include<math.h> //수학 함수를 위한 해더 파일


void print_bar(){ // "-"를 30번 출력하기위한 함수
  printf("\n");
  for (int i = 0; i < 30; i++)
  {
    printf("-");
  }
  printf("\n");
}
int main(){
  double result, value = 1.6;

  result = floor(value); //반내림 한값을 result로 장저장
  printf("%f\n", result);
  result = ceil(value); //반올림 한값을 result로 저장
  printf("%lf\n", result);
  print_bar(); //"-"를 30번 추력하는 함수 
  printf("12.의 절대값은 %f\n",fabs(12.0)); //12의 절대값 을출력한다
  printf("-12.0읠 절대값은 %f\n",fabs(-12)); //-12의 절대값을 출력한다.
  print_bar();
  printf("10의 3승은 %0f.\n",pow(10.0,3.0)); //10.0 의 3.0승을 출력해준다.
  printf("64의 제곱근은 %.0f\n",sqrt(64));  // 64의 제곱근을 출력해준다.
  print_bar();
  
}
```
```c
#include<math.h>//수학 함수를 위한 해더 파일
#include<stdio.h>

int main(void){

  double pi = 3.1415926535; //파이값을 pi에 저장
  double x, y;// 실수형 변수 x, y 선언

  x = pi /2; //pi 나누기 2의 몫을 x에 저장
  y = sin(x); // x의 사인값을 y에 저장
  printf("sin ( %f ) = %f\n",x, y); // x의 값과 y 의 값을 출력
  y = cos(x); // x의 코사인값을 y에 저장
  printf("cos( %f ) = %f\n", x, y); // x의 값과 y 이 값을 출력
}
```
### 기타 함수
```c
#include<stdlib.h>//일빈 유틸리티 함수를 위한 해더 파일
#include<stdio.h>

int main(void){
  system("dir"); // 콘솔에 dir 이라는 명령어를 실행
  printf("아무 키나 치세요\n");
  _getch(); //사용자가 키를 누를때 까지 대기
  system("cls");// 콘솔에서 cls이라는 명령어를 실행
  return 0;
} 
```
### Lab: 시간 맞추기 게임
* 사용자에게 정확한 시간을 예측하게 하는 게임을 만들어보자.
* 10초가 지나면 엔터키를 누르라고 한 후에, 정확한 시간과 얼마나 차이가 나는지를 출력한다.
```c
#include<stdio.h>
#include<time.h>

int main(){
time_t start, end; //time_t = unsigned long 과 동일하다.
start = time(NULL); //현 시간을 start 에 저장
printf("10초가 되면 아무키나 누르세오 \n");
while (1)// 무한 루프
{
  if (getch())//키를 입력받으면 true로 변환
  {
    break;// 무한 루프에서 탈출
  } 
  }
  printf("종료되었씁니다. \n");
  end = time(NULL); // 현 현 시간을 end 에 저장
  printf("경과된 시간은 %ld 초 입니다. \n", end - start); // end 와 start 를 뺴면 경과시간을 출력한다.
  return 0;

}
```
### Lab: 나무 높이 측정
```c
#include <stdio.h>
#include <math.h>

int main() {
    double height, distance, tree_height, degerees, radians; //변수 선언

    printf("나무와의 길이(단위는 미터):");
    scanf("%lf", &distance); //나무와의 길이를 distance에 저장

    printf("측정자의 키 (단위는 미터):");
    scanf("%lf", &height); //측정자의 키를 height에 저장

    printf("각도(단위는 도):");
    scanf("%lf", &degerees); //각도를 degerees에 저장

    radians = degerees * (3.141592 / 180.0); 
    //파이의 값을 180도로 나눈값을 degerees에 저장

    tree_height = tan(radians) * distance + height; 
    //readians에 탄젠트 값 * 나무와의 길이 + 측정자의 키 값을 tree_height 에 저장 
    printf("나무의 높이(단위는 미터): %lf\n",tree_height); //tree_height의 값을 
    return 0;
}
```
### Lab: 삼각함수 그리기
```c
#include <stdio.h>
#include <math.h>
#define PI 3.141592 //상수 PI를 만듬
double rad(double degree)
{
return PI * degree / 180.0; // degree 나누기 180도 곱하기 파이에 값을 리턴
}
void drawbar(int height) //입력받음 값을 만큼 별을수찍는 함수
{
for (int i = 0; i < height; i++) 
printf("*");
printf("\n");
}
int main(void)
{
int degree, x, y; //변수 선언
for (degree = 0; degree <= 90; degree += 10) { 
//degree 이 90 이 될떄까지 실행 degree은 10 씩 증가

y = (int)(60 * sin(rad((double)degree)) + 0.5);
//degree의 값을 double로 형변환 한뒤 rad 함수를 호출에 값을 전달 그 받으 값을 sin 함수 사용
//sin 함수에서 반한된 값을 60을 곱한 뒤 0.5를 더한값을 int 형변환 한 값을 y롤 저장
drawbar(y); // y값을 drawbar로 호출해 
}
return 0;
}
```
### Mini Project: 공학용 계산기 프로그램성작성
```c
#include<stdio.h>
#include<math.h>

int menu(void){ //메뉴를 보여주는 함수

  int n;
  printf("1.팩토리얼\n");
  printf("2.싸인\n");
  printf("3.로그(base_10)\n");
  printf("4.제곱근\n");
  printf("5.순열(npr)\n");
  printf("6.조합(nCr)\n");
  printf("7.종료\n");
  printf("산텍헤주세요 :\n");
  scanf("%d", &n);
  return n; // 선택한 값을 반환
}
void factorial(){ // 팩토리얼 함수
  long long n, result=1, i; // long long 정수형
  printf("정수를 입력하시오: ");
  scanf("%lld", &n);// long long 정수형 값을 n 저장
  for (i = 1; i <= n; i++)
  {
    result = result * i;
  }
  printf("결과 = %lld\n",result); // 팩토리얼 값을 출력
  
}

void sine(){ // 싸인 값을 출력
double a, result;
printf("각도를 입력하시오: ");
scanf("%lf", &a); // 실수형 값을 받음
result = sin(a); // 싸인 함수를 사용해 값을 result에 저장
printf("결과 = %lf\n\n", result);//result 결과 값을 출력
}

void logBase10(){ // log10 함수
  double a, result;
  printf("실수값을 입력하시오: ");
  scanf("%lf", &a); //실수값을 입력받음
  if (a <= 0.0){ // 0보다 같거나 작은수를 입력받으면 오류라는 메시지 출력
    printf("오류\n");
  }
  else{ //그게아니면 log10 함수에 입력받은 값을 넣어 result에 저장
    result = log10(a);
    printf("결과 = %lf\n\n", result); // result에 값을 출력
  }
}

int main(void){

    while (1) // 무한루프
    {
      switch (menu())// menu함수를 호출해 그값을 받음
      {
      case 1: //menu의 값이 1이면 팩토리얼 실행
        factorial();
        break;
      case 2://menu의 값이 2이면 싸인 실행
        sine();
        break;
      case 3://menu의 값이 3이면 로그10함수를 실행 실행
        logBase10();
        break;
      case 7://menu의 값이 7이면 return 0을 실행하여 프로그램 종료
        printf("종료합니다.");
        return 0;
      default //menu의 값이 케으스문에 없으면 아래 프린터문 
        printf("잘못된 선택입니다.");
        break;
      }
    }
    
}
```
