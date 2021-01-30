#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
    pid_t pid, pid1;
    pid = fork();
    if(pid == 0){
        pid1 = getpid();
        printf("child: pid = %d\n", pid); // 0
        printf("child: pid1 = %d\n", pid1); // 자식 pid
    }
    else if(pid > 0) {
        wait(NULL);
        pid1 = getpid();
        printf("child: pid = %d\n", pid); // 자식 pid
        printf("parent: pid = %d\n", pid1); // 부모 pid
    }
    return 0;
}