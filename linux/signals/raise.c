#include"header.h"
void main()
{
printf("hello pid=%d\n",getpid());
raise(2);
//kill(getpid(),2);
while(1);
}

