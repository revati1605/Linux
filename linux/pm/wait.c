#include"header.h"
void main()
{
if(fork()==0)
{
printf("in child..\n");
sleep(10);
exit(0);
}
else
{
int r,s;
r=wait(&s);
printf("in parent r=%d s=%d\n",r,s);
}
}

