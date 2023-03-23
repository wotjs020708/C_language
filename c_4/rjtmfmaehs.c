#include <stdio.h>
int main(void){
	int money,change;
	int price, c5000, c1000, c500, c100;

	printf("물건 값을 입력하시오 :");
	scanf("%d",&price); //물건 값을 입력받는다.
	printf("투입한 금액을 입력하시오:");
	scanf("%d",&money);//물건 값을 입력받는다.
	change = money - price;
	printf("거스름돈은 다음과 같습니다:\n");
	
	c1000 = change / 1000;
	change = change % 1000;
	printf("천원권: %d\n",c1000);
    
	c500 = change / 500;
	change = change % 500;
	printf("오백원: %d\n",c500);
	
	c100 = change / 100;
	change= change % 100;
	printf("백 원: %d\n",c100);


}
