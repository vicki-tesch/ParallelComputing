#include <stdio.h>
#include <stdlib.h>

#include "output.h"


int cmpfunc ( const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}



int main() {
	
	int n; 
    printf("Please insert an integer between 1 and 99 \n");
	scanf("%d" , &n);
    if (n>0 && n<100) {
        printf("nice choice! n is between 0 and 100 \n");
        
        //    (int *) malloc((n+1) * sizeof(int));
        int *myArray;
        myArray = (int *) malloc((n+1) * sizeof(int));
        //   int myArray[n+1];
        int i;
        for (i=0; i<=n; i++){
            myArray[i]= n-i;
            //       printf("the %d value is %d\n",i,myArray[i]);
            
        }
        qsort (myArray,n+1,sizeof(int), cmpfunc);
        outputT5(myArray,n+1);
        printf("\n");
        free(myArray);
        return 0;
        
    }else {
        printf("n is %d this is not between 1 and 99. Please try again. \n",n);
    }

}

//TODO: 

