#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char str[10];
	int len;
	clrscr();
	printf("Enter a string: ");
	scanf("%s",&str);
	len = strlen(str);
	if(str[0] == 'a'){
		  if(str[len-1] == 'b'){
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