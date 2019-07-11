#include <stdio.h>

#include "output.h"
#include "output.c"

int main() {
	
	int n; 
	printf("Please insert an integer between 1 and 99")
	scanf("%d" , &n); 
	malloc( sizeof(int)* (n+1)); 
	
	int myArray[n+1]
	for (i=0; i<=n; i++){
		myArray[i]= n-i;  
		
	}
	qsort (myArray,n+1,sizeof(int), cmpfunc)
	return 0; 
}

//TODO: 