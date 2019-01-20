#include <stdio.h>
#include <ctype.h>

int main(void){
	char apm;
	int h,m;
	printf("Enter a 12-hour time: ");
	scanf("%d:%d ",&h,&m); 
	while((apm=getchar())!='\n'){
		apm=toupper(apm);
		switch(apm){
			case 'P':
				h+=12;break;
			default:
				h=h;break;
		}
	}
	printf("Equivalent 24-hour time: %2d:%2d",h,m);
	return 0;
}
