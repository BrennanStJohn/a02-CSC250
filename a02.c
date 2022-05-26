#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 751

int getUserChoice(); //print menu and get user choice and remain within the bounds of menu
int getShift(); //acquire numerical value in which to shift
void getString(char buf[]); //acquire string value to decrypt or encrypt
void encrypt(char buf[], int shift);
void decrypt(char buf[], int shift);

//do not shift value for new line or spaces


int main() {

	char string[] = "";
	int shift = 2;
	int input = 0;
	char newString;
	char garb;
	
		puts("-------------------------");
		puts("| 1: Change Shift       |");
		puts("| 2: Decrypt a message  |");
		puts("| 3: Encrypt a message  |");
		puts("| 4: Quit               |");
		puts("-------------------------");
		puts("");
			
		printf("%s", "What would you like to do? ");
		puts("");
		
		
	
	do {
	
	shift = getShift(shift);
	
	scanf("%d", &input);
	
	scanf("%c", &garb);
	
	if (input == 1) {
		
		puts("");
		
		printf("%s", "Enter a new shift value: ");
		
		scanf("%d", &shift);
		
		getShift(shift);
		
		getUserChoice(input);
		
	}
	if (input == 2) {
		
		puts("");
		
		printf("%s", "Input: ");
		
		fgets(string, 751, stdin);
		
		getString(string);
		
		decrypt(string, shift);
		
		getUserChoice(input);
	}
	if (input == 3) {
		
		printf("%s", "Input: ");
		
		fgets(string, 751, stdin);
		
		getString(string);
		
		encrypt(string, shift);
		
		getUserChoice(input);
	}
	if (input == 4) {
		puts("Exiting...");
		puts("");
			break;
		}
	if (input > 4 || input < 1){
		
		puts("");
		
		puts("Please enter a valid number!");
		
		getUserChoice(input);
	}
	}

	while ( input >= 1 || input <4); 
		
	
	

}

int getUserChoice() {
		
			
		
			puts("-------------------------");
			puts("| 1: Change Shift       |");
			puts("| 2: Decrypt a message  |");
			puts("| 3: Encrypt a message  |");
			puts("| 4: Quit               |");
			puts("-------------------------");
			puts("");
			
			printf("%s", "What would you like to do? ");
			puts("");
			
			
}
		
		


int getShift(){
	
	int x;
	
	return x;
	
}

void getString(char buf[]){
	
	int i = 0;
	
	while (buf[i] != '\0') {
		if(buf[i] == '\n') {
			buf[i] = '\0';
		}
		i++;
	
	}
	
}

void encrypt(char buf[], int shift){
	
	int i;
	int x;
	char buf1[] = {0};
	
	getString(buf);
	
	for(x = 0; strlen(buf) > x; x++){
		if (buf[i] != '\0' && buf[i] != '\n'){
			buf[x] = buf[i-shift];
		}
	}
	printf("Output: %s", buf);
	puts("");
	
}

void decrypt(char buf[], int shift){
	
	int i;
	int x;
	char buf1[] = {0};
	
	for(x = 0; strlen(buf) > x; x++){
		if (buf[i] != '\0' && buf[i] != '\n'){
			buf[x] = buf[i+shift];
		}
	}
	printf("Output: %s", buf);
	puts("");
}

