/*
NAME:ABDUR RAHIM PAVASKAR
UIN:251M043
CLASS:FE MECHANICAL
DIV:F
*/

#include <stdio.h>

int main() {
	char str[100];
	int i = 0;

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	while (str[i] != '\0') {
		i++;
	}

	if (str[i-1] == '\n') {
		i--;
	}

	printf("Length of string = %d\n", i);

	return 0;
}