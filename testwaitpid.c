#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main() {
   int status=0;
   waitpid(,&status,0);
   printf("exit status is %d",status);
   return 0;
}