#include <stdio.h>
int main(void){
	int fib_number[40]={0};
	//int a,b;
	int i;
	printf("first number: ");
	scanf("%d",&fib_number[0]);
	printf("second number: ");
	scanf("%d",&fib_number[1]);
	printf("%4d %4d ",fib_number[0],fib_number[1]);
	for(i=2;i<40;i++){
		fib_number[i] = fib_number[i-1]+fib_number[i-2];
		printf("%4d ",fib_number[i]);
	}
	return 0;
} 
