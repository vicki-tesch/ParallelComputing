//
//  howdy.c
//  
//
//  Created by David Lah on 20.07.19.
//
#include <stdio.h>
#include "howdy.h"


int main( int argc, char *argv[] )
{
    if (!argc)
    {
        printf("Missing input argument!\n");
        printf("Usage: howdy \n");
        return 1;
    }
    
    printf("Well howdy there %s! YeeHaw!!!\n", argv[1]);
    return 0;
}
