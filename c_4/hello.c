#include <stdio.h>

int main(void){

  int a = 472, b = 385;
  int sum = 0;
  
  sum = a*(b%10);
  printf("%d\n",sum);
  sum = a*(b/10%10);
  printf("%d\n",sum);
  sum = a*(b/100);
  printf("%d\n",sum);
  
  return 0;

}