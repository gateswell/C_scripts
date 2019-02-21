#include <stdio.h>
#include <stdbool.h>
int main(void){
	
	bool digit_seen[10]={false};
	int number,n,i,j;
	int rep[i]; // store repeat number
	
	printf("Enter a number: ");
	scanf("%d",&number);
	printf("Repeat number: ");
	
	while(number>0){
		n=number%10;
		if(digit_seen[n]){
			rep[i]=n;
			i++;
		}
		digit_seen[n]=true;
		number/=10;
	}
	
	for(j=0;j<i;j++){
		printf("%2d",rep[j]);
	}
	return 0;
}
