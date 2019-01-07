#include <stdio.h>
int main(void){
	int num,bill20,bill10,bill5,bill1;
	printf("Enter a dollar amount: ");
	scanf("%d",&num);
	int fold20,fold10,fold5,fold1;
	fold20=num/20;
	fold10=(num-fold20*20)/10;
	fold5 =(num-fold20*20-fold10*10)/5;
	fold1 =num-fold20*20-fold10*10-fold5;
	printf("$20 bills: %d\n",fold20);
	printf("$10 bills: %d\n",fold10);
	printf(" $5 bills: %d\n",fold5);
	printf(" $1 bills: %d\n",fold1);
	return 0;
}