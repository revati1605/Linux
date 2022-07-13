#include<stdio.h>
#include<unistd.h>
void main()
{
	printf("hello world pid=%d,ppid=%d\n",getpid(),getppid());
	while(1);
}

