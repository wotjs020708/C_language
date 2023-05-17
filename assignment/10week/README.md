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
### 수학 함수

```c
#include<stdio.h>
#include<math.h> //수학 함수를 위한 해더 파일


void print_bar(){
  printf("\n");
  for (int i = 0; i < 30; i++)
  {
    printf("-");
  }
  printf("\n");
}
int main(){
  double result, value = 1.6;

  result = floor(value); //반내림
  printf("%f\n", result);
  result = ceil(value); //반올림
  printf("%lf\n", result);
  print_bar();
  printf("12.의 절대값은 %f\n",fabs(12.0));
  printf("-12.0읠 절대값은 %f\n",fabs(-12));
  print_bar();
  printf("10의 3승은 %0f.\n",pow(10.0,3.0));
  printf("64의 제곱근은 %.0f\n",sqrt(64));
  print_bar();
  
}
```
```c
//삼각 함수 라이브러리
#include<math.h>
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
```c
#include<stdlib.h>
#include<stdio.h>

int main(void){
  system("dir"); // 콘솔에 dir 이라는 명령어를 실행
  printf("아무 키나 치세요\n");
  _getch(); //사용자가 키를 누를때 까지 대기
  system("cls");// 콘솔에서 cls이라는 명령어를 실행
  return 0;
} 
```
```c
#include<stdio.h>
#include<time.h>

int main(){
time_t start, end; //time_t = unsigned long 과 동일하다.
start = time(NULL); //현 시각을 start 에 저장
printf("10초가 되면 아무키나 누르세오 \n");
while (1)// 무한 루프
{
  if (getch())//키를 입력받으면 true로 변환
  {
    break;// 무한 루프에서 탈출
  } 
  }
  printf("종료되었씁니다. \n");
  end = time(NULL); // 현 현 시각을 end 에 저장
  printf("경과된 시간은 %ld 초 입니다. \n", end - start); // end 와 start 를 뺴면 경과시각을 출력한다.
  return 0;

}
```
```c
#include <stdio.h>
#include <math.h>

int main() {
    double height, distance, tree_height, degerees, radians;

    printf("나무와의 길이(단위는 미터):");
    scanf("%lf", &distance);

    printf("측정자의 키 (단위는 미터):");
    scanf("%lf", &height);

    printf("각도(단위는 도):");
    scanf("%lf", &degerees);

    radians = degerees * (3.141592 / 180.0);

    tree_height = tan(radians) * distance + height;
    printf("나무의 높이(단위는 미터): %lf\n",tree_height);
    return 0;
}
```
```c
// #include<stdio.h>
// #include<math.h>
// #define PI 3.141592

// double red(double degree){
//   return PI * degree / 180.0;
// }

// void drawbar(int height){
//   for (int i = 0; i < height; i++)
//   {
//     printf("*");
//   }
//   printf("\n");
// }

// int main(){
//   int degree, x, y;
//   for (degree = 0; degree <= 90; degree += 10)
//   {
//     y = (int)(60*sin(red((double)degree)) + 0.5);
//     drawbar(y);
//   }
  
// }
#include <stdio.h>
#include <math.h>
#define PI 3.141592
double rad(double degree)
{
return PI * degree / 180.0;
}
void drawbar(int height)
{
for (int i = 0; i < height; i++)
printf("*");
printf("\n");
}
int main(void)
{
int degree, x, y;
for (degree = 0; degree <= 90; degree += 10) {
// 싸인값은 -1.0에서 1.0이므로 정수로 반올림하여서 증폭한다.
y = (int)(60 * sin(rad((double)degree)) + 0.5);
drawbar(y);
}
return 0;
}
```
```c
#include<stdio.h>
#include<math.h>

int menu(void){

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
  return n;
}
void factorial(){
  long long n, result=1, i;
  printf("정수를 입력하시오: ");
  scanf("%lld", &n);
  for (i = 1; i <= n; i++)
  {
    result = result * i;
  }
  printf("결과 = %lld",result);
  
}

void sine(){
double a, result;
printf("각도를 입력하시오: ");
scanf("%lf", &a);
result = sin(a);
printf("결과 = %lf\n\n", result);
}

void logBase10(){
  double a, result;
  printf("실수값을 입력하시오: ");
  scanf("%lf", &a);
  if (a <= 0.0){
    printf("오류\n");
  }
  else{
    result = log10(a);
    printf("결과 = %lf\n\n", result);
  }
}

int main(void){

    while (1)
    {
      switch (menu())
      {
      case 1:
        factorial();
        break;
      case 2:
        sine();
        break;
      case 3:
        logBase10();
        break;
      case 7:
        printf("종료합니다.");
        return 0;
      default:
        printf("잘못도니 선택입니다.");
        break;
      }
    }
    
}
```
