//
//  taskprintscan.c
//  
//
//  Created by David Lah on 17.07.19.
//

#include "taskprintscan.h"

int main() {
    
    int a,b,c;
    printf("please insert the first number");
    scanf("%d",&a);
    printf("please insert the second number");
    scanf("%d",&b);
    c=a+b;
    printf("the sum of the first number %d and the second number %d is: \n %d+%d=%d \n",a,b,a,b,c);
}
