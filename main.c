#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	printf("input a number : ");
	scanf("%d", &x);
	
	if (x > 0)
	printf("x is positive");
	
	else 
	printf("x is not positive");
	
	
	return 0;
}
