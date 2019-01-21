#include <stdio.h>
int main(void){
	float num1,num2;
	char sign;
	printf("Enter an expression: ");
	int mark=1;
	while(getchar()!='\n'){
		scanf("%f",&num1);
		sign=getchar();
		scanf("%f",&num2);
		//if(sign == '\n') mark=0;
		switch(sign){
			case '+':
				num1+=num2;break;
			case '-':
				num1-=num2;break; 
			case '*':
				num1*=num2;break;
			case '/':
				num1/=num2;break;
		}
	}
	
	printf("Value of expression: %f",num1);
	return 0;
}
