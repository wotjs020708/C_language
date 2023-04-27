# 함수
### 함수(function) : 입력을 받아서 특정한 작업을 수행하여서 블랙 박스(상자)와 같다
#### 함수의 특징
1. 함수는 특정한 작업을 수행하기 위한 명령어등의 모음이다.
2. 함수는 서로 구별되는 이름을 가지고 있다.
3. 함수는 입력을 받을 수 있고 결과를 반환할 수 있다.

#### 함수의 장점
1. 함수를 사용하면 코드가 중복되는 것을 막을 수 있다.
2. 한번 작성된 함수는 여러 번 재사용 할 수 있다.
3. 함수를 사용하면 전체 프로그램을 모듈로 나눌 수 있어 개발 과정이 쉬워지 지고 보다 체계적이 되면서 유지봇도 쉬워진다.

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

####매개 변수와 반환값
```c
int max(int x, int y){ //int 변환형 max 이름 (int x, int y) 매개변수 
 if( x > y){   //함수 몸체
  return x;
 }
 else{
  return y;
 }
}
//x y 입력받아 x 가 크면 x를 return 해주고 
//y가 크면 y를 return 해준다.
```
  
