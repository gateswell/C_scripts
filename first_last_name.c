#include <stdio.h>
int main(void){
	char first_name,f_name,last_name;
	printf("Enter a first and last name: ");
	f_name=getchar();
	while((first_name=getchar())!= ' ');
	while((last_name=getchar())!='\n'){
		printf("%c",last_name);
	} 
	printf(", %c.",f_name);
	return 0;
}
