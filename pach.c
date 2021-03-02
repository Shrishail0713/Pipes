#include<stdio.h>
#include<unistd.h>
# define msgsize 20;

 

char *msg = "hello world";
int main()
{

char buf[msgsize];
int p[2],pid,m1;

if(pipe(p) < 0)
exit(1);
//parent
if((pid = fork())>0){
write(p[1],msg,msgsize);//parents msg
}
else
{
while((m1=read(p[0],buf,msgsize))>0)
printf("%s\n",buf);

if(m1!=0){
exit(2);
printf("Finished reading\n");
}
return 0;
}
}