#include <stdio.h>

/* confirm the ENA digital num right */

int main(void) {
	int q,w,e,r,t,y,u,i,o,p,a,s;
	int d,f,num;
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&q,&w,&e,&r,&t,&y,&u,&i,&o,&p,&a,&s);
	d=q+e+t+u+o+a;
	f=w+r+y+i+p+s;
	num=9-(((f*3)+d-1)%10); 
	printf("Check digit: %d",num);
	return 0;
}
