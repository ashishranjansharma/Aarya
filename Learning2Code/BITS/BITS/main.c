//
//  main.c
//  BITS
//
//  Created by Ashish R Sharma on 3/1/15.
//  Copyright (c) 2015 Ashish R Sharma. All rights reserved.
//

#include "network.h"

char globBuf[65536]; /* unnitialized data */
int test();


int main(int argc, const char * argv[]) {
    // insert code here...
    pid_t ppid=0, pid=0;
    printf("Hello, World!\n");
    
    pid = getpid();
    ppid = getppid();
    test();
    
    printf("ppid=%d, pid= %d", ppid, pid);
    
    return 0;
}
