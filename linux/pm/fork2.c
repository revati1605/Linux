#include"header.h"
void main()
{
	int r;
	printf("hello..\n");
	r=fork();
	printf("id=%d r=%d,pid= %d\n",getpid(),r,getppid());
	printf("id=%d r=%d pid=%d\n",getpid(),r,getppid());
}
