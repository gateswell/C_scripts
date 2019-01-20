#include <stdio.h>
int main(void){
	char num;
	printf("Enter phone number: ");
	while((num=getchar())!= '\n'){
		if (num == 'A' || num == 'B' || num =='C'){
			num=2;
			printf("%d",num);
		}
		else if (num == 'D' || num == 'E' || num =='F'){
			num=3;
			printf("%d",num);
		}
		else if (num == 'G' || num == 'H' || num =='I'){
			num=4;
			printf("%d",num);
		}
		else if (num == 'J' || num == 'K' || num =='L'){
			num=5;
			printf("%d",num);
		}
		else if (num == 'M' || num == 'N' || num =='O'){
			num=6;
			printf("%d",num);
		}
		else if (num == 'P' || num == 'R' || num =='S'){
			num=7;
			printf("%d",num);
		}
		else if (num == 'T' || num == 'U' || num =='V'){
			num=8;
			printf("%d",num);
		}	
		else if (num == 'W' || num == 'X' || num =='Y'){
			num=9;
			printf("%d",num);
		}
		else{
			printf("%c",num);
		}
		//printf("%d",num);
		
	}
	return 0;
}
