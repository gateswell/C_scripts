#include <stdio.h>
int main(void){
	float n,m;
	printf("Enter a number:");
	scanf("%f",&m);
	while(m>0){
		printf("Enter a number:");
		scanf("%f",&n);
		if (n<=0){
			break;
		}
		else if(n>=m){
			m=n;
		}
	}
	printf("The largest number entered was %.2f",m);
	return 0;
}
