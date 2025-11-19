/*
NAME:ABDUR RAHIM PAVASKAR
UIN:251M043
CLASS:FE MECHANICAL
DIV:F
*/

#include<stdio.h>

void counter() {
	static int count = 0;
	count ++;
	printf("Count = %d\n", count);
}

int main() {
	counter();
	counter();
	counter();

	return 0;
}