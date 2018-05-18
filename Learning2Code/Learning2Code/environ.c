//
//  environ.c
//  Learning2Code
//
//  Created by Ashish R Sharma on 2/24/15.
//  Copyright (c) 2015 Ashish R Sharma. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int   main()
{  int pid1,pid2;
    printf("FIRST\n");
    pid1=fork();
    if(pid1==0) {
        printf("SECOND \n");
        pid2=fork();
        printf("SECOND \n");
    }  else   {
        printf("THIRD\n");
    }
}