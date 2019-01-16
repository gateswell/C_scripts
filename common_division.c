#include <stdio.h>
int main(void){
	int m,n,gcd;
	printf("Enter two itegers: ");
	scanf("%d %d",&m,&n);
	if(n==0){
		gcd =m;
		printf("Greatest common divisor: %d",gcd);
	}
	else{
		int a;
		while(m%n){
			a=m%n;
			m=n;
			n=a;
			gcd=a;
		}
		printf("Greatest common divisor: %d",gcd);
	}
	return 0;
}
