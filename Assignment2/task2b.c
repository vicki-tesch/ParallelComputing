#include <stdio.h>

#include "output.h"
#include "output.c"

int main() {
	
	int n; 
	printf("Please insert an integer higher (or equal to) 0");
	scanf("%d" , &n); 
	
	for (int i=0; i<=n; i++){
		outputT2(i); 
		
	}
	return 0; 
}
