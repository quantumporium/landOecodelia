#include <stdio.h>

#define NUM_STRINGS 5 // what does define do
#define MAX_LENGHT_OFSTRING 1000

void get_line(char *string_pt){
	// assigne a string with space to a pointer

	scanf("%[^\n]s\n", string_pt);
	}

int main() {
	/*
	int variable[NUM_STRINGS][MAX_LENGHT_OFSTRING]; // 2d array
	int i = 0;

	for(int i = 0; i <= NUM_STRINGS; i++){
		printf("Enter something: ");
		scanf("%[^\n]*c", variable[i]);
	}

	for(int i = 0; i <= NUM_STRINGS; i++){
		printf("[%d] %s\n", i, variable[i]);
	}
	*
	*/

	// input line with spaces
	char string[MAX_LENGHT_OFSTRING];
	printf("Enter something: ");
	get_line(string);
	printf("[0] you entered: %s\n", string);
	printf("[1] the string as lenght: %d\n", strlen( string));
	return 0;
}


int main();
