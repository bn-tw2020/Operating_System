#include<stdio.h>
#include<unistd.h>

int main(){
    pid_t pid;
    pid =fork();
    printf("Hello, Process! %d\n", pid);
}

// fork() 는 일종의 시스템 콜이다.
// parent 프로세스를 그대로 복사하고 자신의 코드를 그대로 실행한다.
// 자식이 실행되는 동안에 wait를 해주면 ready queue에서 wait queue에서 대기를 한다.
// 자식이 끌날때 까지 대기를하다가 끝나면 다시 ready queue로 돌아간다.