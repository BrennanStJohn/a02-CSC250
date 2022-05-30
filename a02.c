#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getUserChoice(int *input); // this function is intended to print the menu and get the user's menu option choice. be sure your program appropriately handles invalid selections
int getShift(int *shifter); // this function should acquire the numerical "key" value by which the characters will be shifted
void getString(char buf[]); // this function should acquire the message the user would like to encryp or decrypt
void encrypt(char buf[], int shift); // print each CHAR not the entire string. starts at -2
void decrypt(char buf[], int shift); // print each CHAR not the entire string. starts at +2

//does not shift value for new line or spaces
//never used or learned pointers until this assignment, hope it's correct lol


int main() {
	
	char string[] = "";
	int shifter = 2;
	int userInput;
	
	while ( userInput >= 1 || userInput <4){
	
	puts("-------------------------");
	puts("| 1: Change Shift       |");
	puts("| 2: Decrypt a message  |");
	puts("| 3: Encrypt a message  |");
	puts("| 4: Quit               |");
	puts("-------------------------");
	puts("");
	
	printf("%s", "What would you like to do? ");
	
	getUserChoice(&userInput);
	
	puts("");
	
	if (userInput == 1) {
		
		printf("%s", "Enter a new shift value: ");
		
		getShift(&shifter);
	
		puts("");
		
		}
	if (userInput == 2) {
		
		printf("%s", "Input: ");
		
		getString(string);

		decrypt(string, shifter);

		}
	if (userInput == 3) {
		
		printf("%s", "Input: ");
		
		getString(string);
		
		encrypt(string, shifter);
	
		}
	if (userInput == 4) {
		
		puts("");
		puts("Exiting...");
		break;
		}
	if (userInput > 4 || userInput < 1){
		
		puts("Please enter a valid number!");
		
		}
	
	}
	
	

}

int getUserChoice(int *userInput) {

	char garb;

	scanf("%d", userInput);
	
	scanf("%c", &garb);
	
}

int getShift(int *shifter){
	
	char garb;
	
	scanf("%d", shifter);
	
}

void getString(char buf[]){
	
	int i = 0;
	
	fgets(buf, 751, stdin);
	
	while (buf[i] != '\0') {
		if(buf[i] == '\n') {
			buf[i] = '\0';
		}
		i++;
	
	}
	
}

void encrypt(char buf[], int shift){
	
	int i;
	int len = strlen(buf);
	char mod;
	
	puts("");
	printf("%s", "Output: ");
	
	for (i = 0; buf[i] != '\0'; i++) {
		
		if (buf[i] != ' '){
		mod = buf[i] - shift;
		}
		else if (buf[i] == ' ') {
		mod = ' ';
		}
		printf("%c", mod);
	}
	
	puts("");
	puts("");
	
}

void decrypt(char buf[], int shift){
	
	int i;
	int len = strlen(buf);
	char mod;
	
	
	puts("");
	printf("%s", "Output: ");
	
	for (i = 0; buf[i] != '\0'; i++) {
		
		if (buf[i] != ' '){
		mod = buf[i] + shift;
		}
		else if (buf[i] == ' ') {
		mod = ' ';
		}
		printf("%c", mod);
	}
	
	puts("");
	puts("");
}