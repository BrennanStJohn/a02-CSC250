#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int getUserChoice;
int getShift;
void getString(char buf[]);
void encrypt(char buf[], int shift);
void decrypt(char buf[], int shift);


int main() {

	char string[SIZE] = "";
	int shift = 0;
	int input = 0;


	puts("-------------------------");
	puts("| 1: Change Shift       |");
	puts("| 2: Decrypt a message  |");
	puts("| 3: Encrypt a message  |");
	puts("| 4: Quit               |");
	puts("-------------------------");
	puts("");
	
	printf("%s", "What would you like to do? ");
	scanf("%d", &input);
	puts("");
	
	while(input != 4) {
		if(input == 1 || input == 2) {
		printf("%s", "Input: ");
		scanf("%s", string);
		}
		else {
		printf("%s", "Enter a new shift value: ");
		scanf("%d", &shift);
		}
	
	}

}

int getUserChoice(int x){
	
	
}

int getShift(int x){
	
	
}

void getString(char buf[]){
	
	
}

void encrypt(char buf[], int shift){
	
	
}

void decrypt(char buf[], int shift){
	
	
}