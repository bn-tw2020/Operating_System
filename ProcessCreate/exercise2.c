#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main() {
    fork();
    fork();
    fork();
    printf("Hello, fork()\n");
    return 0;
}

// fork는 총 8번이 될것이다.