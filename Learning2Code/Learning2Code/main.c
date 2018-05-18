//
//  main.c
//  Learning2Code
//
//  Created by Ashish R Sharma on 1/6/14.
//  Copyright (c) 2014 Ashish R Sharma. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, const char * argv[])
{

    extern char **environ;
    // insert code here...
    pid_t  pid;
    
    pid = fork();
    if ( pid == 0 ) {
        //child process
        printf("Hello, World!\n");
    } else {
        //parent
        printf("Hello, my dear Sinu!\n");
    }
    
    return 0;
}

