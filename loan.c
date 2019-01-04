#include <stdio.h>
int main(void){
	float loan,rate,payment;
	float first_payment,second_payment,third_payment,ratio;
	printf("Enter amount of loan: ");
	scanf("%f",&loan);
	printf("Enter interest rate: ");
	scanf("%f",&rate);
	printf("Enter monthly payment: ");
	scanf("%f",&payment);
	ratio=rate/(100*12);
	first_payment=(1+ratio)*loan-payment;
	//second_payment=first_payment-payment-(rate*first_payment)/(100*12);
	second_payment=first_payment-payment+(ratio*first_payment);
	third_payment=second_payment-payment+(ratio*second_payment);
	printf("Balance remaining after first payment: $%.2f\n",first_payment);
	printf("Balance remaining after second payment: $%.2f\n",second_payment);
	printf("Balance remaining after third payment: $%.2f\n",third_payment);
	return 0;
}