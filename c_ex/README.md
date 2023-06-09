# 함수
-----------------------------------------------------------------------------------------
### 함수(function) : 입력을 받아서 특정한 작업을 수행하여서 블랙 박스(상자)와 같다
#### 함수의 특징
1. 함수는 특정한 작업을 수행하기 위한 명령어등의 모음이다.
2. 함수는 서로 구별되는 이름을 가지고 있다.
3. 함수는 입력을 받을 수 있고 결과를 반환할 수 있다.

#### 함수의 장점
1. 함수를 사용하면 코드가 중복되는 것을 막을 수 있다.
2. 한번 작성된 함수는 여러 번 재사용 할 수 있다.
3. 함수를 사용하면 전체 프로그램을 모듈로 나눌 수 있어 개발 과정이 쉬워지 지고 보다 체계적이 되면서 유수보수도 쉬워진다.
---------------------------------------------------------
#### 함수의 종류
* 함수
  * 사용자 정의 함수
  * 라이브러리 함
  

  
 ##### 예제
```C
#include<stdio.h>

void print_stars(){
  for (int i = 0; i < 30; i++)
  {
    printf("*");
  }
  
}

int main (){
  print_stars(); //함수 호출
  printf("\nHello World!\n");
  print_stars(); //함수 호출
  printf("\n"); 
  return 0;

}
```
---------------------------------------------------------------------
#### 매개 변수와 반환값
```c
int max(int x, int y){ //int 반환형 max 이름 (int x, int y) 매개변수 
 if( x > y){   //함수 몸체
  return x;
 }
 else{
  return y;
 }
}
//x y 입력받아 x 가 크면 x를 반환 해주고 
//y가 크면 y를 반환 해준다.
```
----------------------------------------------------
#### 인수와 매개변수
* 인수(argument)는 함수에 실제로 전달되는 값
* 매개 변수(parameter)는 이 값을 전달받는 변수이다.
```c
valuse = max(인수) ---> int max(매개 변수)
//만약 매개 변수가 없는경우 void를 써주거나 아무것도 적지 않으면 된다.
//함수가 호출될 때마다 인수는 달라질 수 있다.
//매개 변수의 개수는 정확히 일치하여야 한다는 점이다. 매개 변수의 개수와
//인수의 개수가 일치하지 않으면 아주 찾기 어려운 오류가 발생하게 된다.
```  
---------------------------------------------------------
##### 예제

```c
#include <stdio.h>
int max(int x, int y)
{
 if (x > y)
 return x;
 else
 return y;
}
int main(void)
{
 int x, y, larger;
 printf("정수 2개를 입력하시오: ");
 scanf("%d %d", &x, &y);
 larger = max(x, y);
 printf("더 큰 값은 %d입니다. \n", larger);
 return 0;
}
```
---------------------------------------------
#### Lab : 정수를 입력받는 get_integer() 함수
>입력 안내 메시지를 출력하고 정수를 입력받아서 우리에게 반환해주는 함수
get_integer()를 작성해보자
```c
#include<stdio.h>
int get_integer(){

  int value;
  printf("정수를 입력하시오 :");
  scanf("%d",&value);
  return value;
}

int main(){
  printf("%d",get_integer());

}
```
#### Lab 정수의 합을 계산하는 add() 함수
>두 개의 정수를 받아서 합을 계산하는 함수를 만들어보자. 함수 이름부터 결정하여야 한다.
```c
#include<stdio.h>

int add(int x, int y){
 
 return x+y;

}

int main(){
 int x, y;
 printf("정수를 입력해주세요 : ");
 scanf("%d %d",&x,&y);
 printf("%d",add(x,y));
}
```
-----------
### 재귀 함수
## 스택 오버플로워 주의 !
```c
#include<stdio.h>

int factorial(int n) { 
    if (n <= 1) { 
        return (0);
    } 
    printf("함수 :%d\n",n);
    return n * factorial(n-1);
    //n * n * n * 1? == 4 * 3 * 2 * 1
    
}

int main(){

printf("메인 :%d\n",factorial(4));
}
```
