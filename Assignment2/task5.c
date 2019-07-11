#include <stdio.h>

#include "output.h"
#include "output.c"

int int_comp(const void *A, const void *B) {

  int first = *(int *)A
  int second = *(int *)B;
  
  if (first < second) {
    return -1;
  } else if (first == second) {
    return 0;
  } else {
    return 1;
  }
}




int main() {
	
	int n; 
	printf("Please insert an integer between 1 and 99:")
	scanf("%d" , &n); 
	
	if (n>=100||n<=0){
		printf("No legitimate number you sneeky little friend \n"); 
		exit(0); 
	}
	
	int *myArray=(int *) malloc( sizeof(int)* (n+1)); 
	
	for (int i=0; i<=n; i++){
		myArray[i]= n-i;  
	}
	
	qsort(myArray,n+1,sizeof(int), int_comp); 
	
	outputT5(myArray); 
	
	free(myArray); 
	return 0; 
}

