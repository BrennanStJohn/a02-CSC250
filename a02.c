#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getUserChoice(); //this function is intended to print the menu and get the user's menu option choice. be sure your program appropriately handles invalid selections
int getShift(); //this function should acquire the numberical "key" value by which the characters will be shifted
void getString(char buf[]); //should acquire the message the user would like to encrypt or decrypt
void encrypt(char buf[], int shift);
void decrypt(char buf[], int shift);

//do not shift value for new line or spaces


int main() {
	
	getUserChoice();
		
	
}

	
		
	
	



int getUserChoice() {
		
	char string[] = "";
	int shifter = 2;
	int input = 0;
	char newString[] = "";
	char garb;
			
		
			puts("-------------------------");
			puts("| 1: Change Shift       |");
			puts("| 2: Decrypt a message  |");
			puts("| 3: Encrypt a message  |");
			puts("| 4: Quit               |");
			puts("-------------------------");
			puts("");
			
			printf("%s", "What would you like to do? ");
			
	while ( input >= 1 || input <4){
	
	scanf("%d", &input);
	
	scanf("%c", &garb);
	
	if (input == 1) {
		
		puts("");
		
		getShift(shifter);
		
		getUserChoice(input);
		
	}
	if (input == 2) {
		
		puts("");
		
		getString(string);

		decrypt(string, shifter);
		
		getUserChoice(input);
	}
	if (input == 3) {
		
		puts("");
		
		getString(string);
		
		encrypt(string, shifter);
		
		getUserChoice(input);
	}
	if (input == 4) {
		
		puts("");
		puts("Exiting...");
		break;
		}
	if (input > 4 || input < 1){
		
		puts("");
		
		puts("Please enter a valid number!");
		
		getUserChoice(input);
	}
	}
			
			
}
		
		


int getShift(){
	
	int shift;
	
	printf("%s", "Enter a new shift value: ");
		
	scanf("%d", &shift);
	
	puts("");
	
	return shift;
	
}

void getString(char buf[]){
	
	int i = 0;
	
	printf("%s", "Input: ");
	
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
		
		mod = buf[i];
		
		if (mod != ' '){
		mod = mod - shift;
		}
		buf[i] = mod;	
	}
	
	printf("'%s'", buf);
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
		
		mod = buf[i];
		
		if (mod != ' '){
		mod = mod + shift;
		}
		buf[i] = mod;
	}
	
	printf("'%s'", buf);
	puts("");
	puts("");
	

}