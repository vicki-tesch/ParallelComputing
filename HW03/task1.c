//
//  task1.c
//  
//
//  Created by David Lah on 19.07.19.
//
#include <stdio.h>
#include "task1.h"
#include "output.h"

 int countstring (char mystring[]){
     int i;
     for (i=0; mystring[i]!=0; i++){
   //      printf("the %d number of the input argument is %d\n",i,mystring[i]);
     }
     return i; 
  //   printf("my string is called %s\n",mystring);
   //  return 0;
}
     
     
int main( int argc, char *argv[] )
{
    int a;
//    a = countstring (instring);
 //   printf(" argc is %d and the input string is %d and %d %d %d \n",argc,argv[1][0],argv[1][1],argv[1][2],argv[1][3]);
    char b[]="mystringisnice";
    a=countstring (argv[1]);

    outputT2 (a);
    printf("\n");
    return 0;
}
