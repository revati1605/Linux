#include"header.h"
void main()
{
if(fork()==0)
{
printf("in child.pid=%d.\n",getpid());
sleep(10);
exit(2);
}
else
{
int r,s;
printf("in parent befoe wait()\n");
r=wait(&s);
//printf("in parent r=%d s=%d\n",r,s);
if(WIFEXITED(s))
{
printf("child terminated normally %d\n",WEXITSTATUS(s));
}
else if(WIFSIGNALED(s))
{
printf("child terminated by signal %d\n",WTERMSIG(s));

}
}
}
