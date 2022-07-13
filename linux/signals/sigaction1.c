#include"header.h"
void my_isr(int n)
{
	printf("in isr pid=%d\n",getpid());
}
void main()
{
	if(fork()==0)
	{
		printf("in child pid=%d\n",getpid());
		while(1);
	}
	else
	{
		printf("in parent pid=%d\n",getppid());
		struct sigaction new;
		new.sa_handler=my_isr;
		sigemptyset(&new.sa_mask);
		new.sa_flags=SA_NOCLDSTOP | SA_NOCLDWAIT;

		printf("hello  \n");
		sigaction(SIGCHLD,&new,0);
		while(1);
	}
}

