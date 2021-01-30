#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int value = 5;

int main(){
    pid_t pid;
    pid = fork();

    if(pid == 0) {
        value += 15;
        return 0;
    }

    else if(pid > 0) {
        wait(NULL);
        printf("Parent: value = %d\n", value);
    }
}

// value = 5
// value 자체도 복사가 되기 때문에 자식 프로세스에서는 아예 출력을 안한다.
// 출력은 부모 프로세스에서 진행되기 때문에 5가 나타난다.