#include <stdio.h>
int main(void){
	int a,b,c,d;
	char sign;
	printf("Enter two fractions seperated by a (+-*/) sign: ");
	scanf("%d/%d",&a,&b);
	sign=getchar();
	scanf("%d/%d",&c,&d);
	switch(sign){
		case '+':
			printf("The sum is: %d/%d",a*d+b*c,b*d);break;
		case '-':	
			printf("The sum is: %d/%d",a*d-b*c,b*d);break;
		case '*':
			printf("The sum is: %d/%d",a*c,b*d);break;
		case '/':
			printf("The sum is: %d/%d",a*d,b*c);break;
		default:
			printf("wrong sign!\n");
	}
	return 0;
}
