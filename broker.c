#include <stdio.h>
float value,fee;
int main(void)
{
	printf("Enter calue of trade: ");
	scanf("%f",&value);
	if (value < 2500.00f){
		fee=30.00f+(value*1.7f)/100; 
	} 
	else if(value <=6250.00f){
		fee=56.00f+(value*0.66f)/100;
	}
	else if(value <=20000.00f){
		fee=76.00f+(value*0.34f)/100;
	}
	else if(value <=50000.00f){
		fee=100.00f+(value*0.22f)/100;
	}
	else if(value <=500000.00f){
		fee=155.00f+(value*0.11f)/100;
	}
	else{
		fee=255.00f+(value*0.09f)/100;
	}
	if(fee < 39.00f)
		fee=39.00f;
	printf("Commission: $%.2f",fee);
	return 0;	
}
