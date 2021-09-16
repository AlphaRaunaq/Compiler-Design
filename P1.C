#include<stdio.h>
void main(){
	char str[10];
	clrscr();
	printf("Enter a string: ");
	scanf("%s", &str);
	if(str[0] == 'a'){
		if(str[1] == 'b'){
			printf("String is valid");
		}
		else{
			printf("String is invalid");
		}
	}
	else{
		printf("String is invalid");
	}
	getch();
}
