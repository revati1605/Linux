#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main()
{
printf("pid=%d\n",getpid());
printf("hello world\n");
while(1);
}

