#include <stdio.h>
#include <stdbool.h>
int main(void){
	int j,n,m,input;
	int num[10]={0};
	bool digit_seen[10]={false};
	printf("Enter a number: ");
	scanf("%d",&input);
	while(input>0){
		m=input%10;
		num[m] ++;
		input/=10;
	}
	printf("Digit:\t");
	for(j=0;j<10;j++){
		printf(" %d",j);
	}
	printf("\nOccurrences:\t");
	for(j=0;j<10;j++){
		printf(" %d",num[j]);	
	}
	printf("\n");
} 
