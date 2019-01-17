#include <stdio.h>
int main(void){
	int num,dom;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("The reversal is:" );
	do{
		dom= num%10;
		num /=10;
		if(dom !=0){
			printf("%d",dom);
		}
		else{
			break;
		}
	}while(dom!=0);
	return 0;
} 
