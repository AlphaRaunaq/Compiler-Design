#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char str[10];
	int i;
	clrscr();
	printf("Enter a string: ");
	scanf("%s", &str);
	i=0;
	while(str[i] != '\0'){
		if(str[i] == 'a'){
			i++;
		}
		else if(str[i] != 'a'){
			printf("String is invalid");
			getch();
			return(0);
		}
	}
	printf("String is valid");
	getch();
}


