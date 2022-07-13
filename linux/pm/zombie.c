#include"header.h"
void main()
{
if(fork()==0)
{
//child process
printf("in child\n");
sleep(10);
}
else
{
printf("in parent\n");
while(1);
}
}
