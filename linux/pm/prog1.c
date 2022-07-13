#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
	printf("in p2.c pid=%d,ppid=%d\n",getpid(),getppid());
	system("./prog");
	printf("in p2.c bye");
}

